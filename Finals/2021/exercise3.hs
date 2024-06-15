data Students = Student Int String String deriving (Show, Eq)
data Courses = Course Int String deriving (Show, Eq)
type Enrollment = [(Students, Courses, Int)]

courseName (_, (Course _ name), _) = name

groupCourses [] e = []
groupCourses (x:xs) e = [(x, filter (\ a -> courseName a == x) e)] ++ groupCourses xs e

maxLen = maxHelper 0 ("", [])

maxHelper _ currCourse [] = currCourse

maxHelper currLength currCourse ((x, l):xs) = if length l >= currLength then maxHelper (length l) ((x,l)) xs
    else maxHelper currLength currCourse xs
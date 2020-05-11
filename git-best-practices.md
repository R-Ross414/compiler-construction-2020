# Git best practices

I collect here some lessons learned from using git for [assignments](assignments.md). Some of them will apply only for next year.

- Create a github repository for this course.
- Conceptually, the repo is your repo for the duration of the course.
- Assignment 1 will be individual work. Every student will invite me as a collaborator and document the progress on Assignment 1 by regularly updating git. Proper use of git will be considered for grading.
- Assignments 2-5 can be done in group work. To manage collaboration in the group, it makes sense to make a repo for each group. 
- Unless there are major changes in the composition of the groups, do not make a new repo for a new assignment. Rather create meaningful subfolders such as `Assignment1`, etc.
- Use the repo to create a trail of your work. Commit and push often.
- Break your assignments into milestones. Make sure all milestones are pushed.
- Do not create different versions by copying files. Use branches.
- Do not track/commit/push automatically generated files. 
- Avoid unthinking use of `git add *`. Only add files that should be tracked. 
- Run `git status`. If you see under `Untracked files` names that you don't recognize, they are likely machine generated files. Do not track those. Rather add these names to a file named `.gitignore` at the root of your repo.
- Look at some [examples](https://github.com/github/gitignore) of `.gitignore` files. But I recommend not to copy one of them. Rather build them up incrementally using `git status` and add files you do not want to track to `.gitignore` step by step.

## Further reading

The links below are written for more complex projects than a typical assignment, but it cannot harm to have a look:

- [Commit Often, Perfect Later, Publish Once: Git Best Practices](https://sethrobertson.github.io/GitBestPractices/)
- [Examples of gitignore files](https://github.com/github/gitignore)

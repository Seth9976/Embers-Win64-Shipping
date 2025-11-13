// 函数: sub_1404b5e80
// 地址: 0x1404b5e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x30, 0)
var_18 = rax
int32_t var_10 = 3

if (rax != 0)
    *rax = &data_142d3fe58
    rax[1] = &data_143ed5e20
    rax[2] = sub_140a222e0
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

data_143ed5e28 = (*(*rcx + 0x90))(rcx, TaskGraph.TaskPriorities.FetchVisibilityForPrimitivesTask", 
    Task and thread priority for FetchVisibilityForPrimitivesTask.", &var_18, 0)
data_143ed5e20 = &data_142d3ff10
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_1404b5f72:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    void*** rcx_1 = var_18
    
    if (rcx_1 != 0)
        (*rcx_1)[7](rcx_1, 0)
        rax_5 = var_18
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_18 = rax_5
        
        int32_t var_10_1 = 0
        goto label_1404b5f72
data_143ed5e30 = 0
data_143ed5e38 = 0
sub_1405947f0(&data_143ed5e30, 0x3a)
int32_t rax_6 = data_143ed5e38.d + 0x3a
bool cond:0 = rax_6 s<= data_143ed5e38:4.d
data_143ed5e38.d = rax_6

if (not(cond:0))
    sub_140594770(&data_143ed5e30)

UnDecorator::getReferenceType(data_143ed5e30, 
    TaskGraph.TaskPriorities.FetchVisibilityForPrimitivesTask", 0x74)
data_143ed5e40 = 0x400
data_143ed5e48 = 0x200
data_143ed5e4c = 1
return atexit(sub_142ce2b80) __tailcall

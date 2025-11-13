// 函数: sub_140573ba0
// 地址: 0x140573ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x30, 0)
var_18 = rax
int32_t var_10 = 3

if (rax != 0)
    *rax = &data_142d3fe58
    rax[1] = &data_143f71530
    rax[2] = sub_140a222e0
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

data_143f71538 = (*(*rcx + 0x90))(rcx, TaskGraph.TaskPriorities.NavTriggerAsyncQueries", 
    Task and thread priority for UNavigationSystemV1::PerformAsyncQueries.", &var_18, 0)
data_143f71530 = &data_142d3ff10
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_140573c92:
    
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
        goto label_140573c92
data_143f71540 = 0
data_143f71548 = 0
sub_1405947f0(&data_143f71540, 0x30)
int32_t rax_6 = data_143f71548.d + 0x30
bool cond:0 = rax_6 s<= data_143f71548:4.d
data_143f71548.d = rax_6

if (not(cond:0))
    sub_140594770(&data_143f71540)

UnDecorator::getReferenceType(data_143f71540, TaskGraph.TaskPriorities.NavTriggerAsyncQueries", 
    0x60)
data_143f71550 = 0x800
data_143f71558 = 0
data_143f7155c = 1
return atexit(sub_142d12100) __tailcall

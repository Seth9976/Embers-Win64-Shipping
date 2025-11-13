// 函数: sub_140532e50
// 地址: 0x140532e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x30, 0)
var_18 = rax
int32_t var_10 = 3

if (rax != 0)
    *rax = &data_142d3fe58
    rax[1] = &data_143f57960
    rax[2] = sub_140a222e0
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

data_143f57968 = (*(*rcx + 0x90))(rcx, TaskGraph.TaskPriorities.ParallelClothTask", 
    Task and thread priority for parallel cloth.", &var_18, 0)
data_143f57960 = &data_142d3ff10
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_140532f42:
    
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
        goto label_140532f42
data_143f57970 = 0
data_143f57978 = 0
sub_1405947f0(&data_143f57970, 0x2b)
int32_t rax_6 = data_143f57978.d + 0x2b
bool cond:0 = rax_6 s<= data_143f57978:4.d
data_143f57978.d = rax_6

if (not(cond:0))
    sub_140594770(&data_143f57970)

UnDecorator::getReferenceType(data_143f57970, u"TaskGraph.TaskPriorities.ParallelClothTask", 0x56)
data_143f57980 = 0x400
data_143f57988 = 0x200
data_143f5798c = 1
return atexit(sub_142d0d270) __tailcall

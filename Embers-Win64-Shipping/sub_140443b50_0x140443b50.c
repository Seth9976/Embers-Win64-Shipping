// 函数: sub_140443b50
// 地址: 0x140443b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143d78ec0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143d78ec0)
    
    if (data_143d78ec0 == 0xffffffff)
        __builtin_memset(&data_143d78e80, 0, 0x1c)
        void*** rax_9 = sub_1405978f0(0x28, &data_143d78e90)
        
        if (rax_9 != 0)
            *rax_9 = &data_142d42fd0
            rax_9[1] = &data_143d78e80
            rax_9[2] = sub_140a4c350
            rax_9[4] = sub_140a387b0()
        
        data_143d78ea0 = 0
        data_143d78ea8 = 0
        void*** rax_11 = sub_1405978f0(0x28, &data_143d78ea0)
        
        if (rax_11 != 0)
            *rax_11 = &data_142d42fd0
            rax_11[1] = &data_143d78e80
            rax_11[2] = sub_140a4c3a0
            rax_11[4] = sub_140a387b0()
        
        data_143d78eb0 = 0
        data_143d78eb8 = 0
        atexit(sub_142cbd040)
        _Init_thread_footer(&data_143d78ec0)

void*** var_18 = nullptr
void*** rax_2 = sub_140a84c80(0, 0x30, 0)
var_18 = rax_2
int32_t var_10 = 3

if (rax_2 != 0)
    rax_2[1] = &data_143d78e80
    *rax_2 = &data_142d3fe58
    rax_2[2] = sub_140a438f0
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_142d3feb0

int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

data_143db3780 = (*(*rcx_1 + 0x90))(rcx_1, CPUTime.Dump", 
    Usage -Delay=[NumSeconds=30]\nIf Delay==0, disables printing the CPU usa", &var_18, 0)
data_143db3778 = &data_142d3ff10
void*** rax_7

if (var_10 == 0)
    rax_7 = var_18
label_140443c7c:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    void*** rcx_2 = var_18
    
    if (rcx_2 != 0)
        (*rcx_2)[7](rcx_2, 0)
        rax_7 = var_18
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_18 = rax_7
        
        int32_t var_10_1 = 0
        goto label_140443c7c
return atexit(sub_142cbb190) __tailcall

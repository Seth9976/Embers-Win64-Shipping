// 函数: sub_140b02330
// 地址: 0x140b02330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
void** arg_8 = arg1
uint64_t rsi
rsi.b = 0
char rax = sub_140b5b8a0(arg1.d, 0x101)
arg1.b = (arg1 u>> 0x20).d == 0

if ((arg1.b & rax) == 0)
    int32_t rcx_6
    rcx_6.b = arg_8:4.d == 0
    
    if ((rcx_6.b & sub_140b5b8a0(arg_8.d, 0x102)) == 0)
        char rax_10
        int64_t rdx_1
        rax_10, rdx_1 = sub_140b5b8a0(arg_8.d, 0x103)
        int32_t rcx_7
        rcx_7.b = arg_8:4.d == 0
        
        if ((rcx_7.b & rax_10) == 0)
            rdx_1.b = 1
            int64_t* rax_12 = sub_140af32e0(arg_8)
            
            if (rax_12 != 0)
                int64_t var_a8
                var_a8.d = arg5
                rsi = zx.q((*(*rax_12 + 0x50))(rax_12, arg2, &arg_18, arg4, var_a8, arg6))
                goto label_140b024f6
        else
            rsi.b = sub_140a367e0(arg4, arg2, arg5, arg_18) s> 0
        label_140b024f6:
            
            if (rsi.b != 0)
                return zx.q(rsi.b)
else
    int32_t r15_1 = arg_18
    int64_t (* var_58_1)(int64_t arg1, int32_t arg2, int32_t arg3) = sub_140b07c10
    int64_t var_48_1 = 0
    int64_t (* var_50_1)(int64_t arg1, int64_t arg2) = sub_140b07c20
    int32_t var_80_1 = arg5
    int32_t rdx = 0xf
    char* var_88 = arg4
    
    if (arg6 != 0)
        rdx = arg6
    
    int128_t* var_78_1 = arg2
    int32_t var_70_1 = r15_1
    
    if (sub_140371b70(&var_88, rdx, "1.2.5", 0x58) == 0)
        int32_t rax_7 = sub_140371df0(&var_88, 4)
        int32_t rdi_1 = r15_1
        int32_t rbx_2 = rax_7
        int32_t var_6c
        
        if (rax_7 == 1)
            rdi_1 = var_6c
        int32_t rax_8 = sub_140374100(&var_88)
        rsi = 0
        
        if (rbx_2 s>= 0)
            rbx_2 = rax_8
        
        rax_8.b = rbx_2 == 0
        
        if (r15_1 == rdi_1)
            rsi = zx.q(rax_8.b)
        
        goto label_140b024f6

TEB* gsbase

if (data_143de5b9c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5b9c)
    
    if (data_143de5b9c == 0xffffffff)
        void* rcx_13 = data_143ddb400
        uint64_t var_98 = 0
        int32_t var_90_1 = 0
        
        if (sub_140af5b90(rcx_13, Core.System", FailOnUncompressErrors", &var_98, &data_143de5780)
                == 0)
            uint64_t rcx_15 = var_98
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
        else
            int16_t* const rcx_14 = &data_142d40450
            uint64_t rbx_5 = var_98
            
            if (var_90_1 != 0)
                rcx_14 = rbx_5
            
            data_1439a0368 = sub_140b16cc0(rcx_14)
            
            if (rbx_5 != 0)
                sub_140a74f90(rbx_5)
        
        _Init_thread_footer(&data_143de5b9c)

if (data_1439a0368 == 0)
    return 1

return zx.q(rsi.b)

// 函数: sub_141fe77b0
// 地址: 0x141fe77b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
int32_t r10 = *(result + 0x1c)
int32_t r9 = result[4].d

if (result[3].d s>= r10)
    r10 = result[3].d

if (r10 s>= r9)
    r9 = r10

if (r9 s> 0)
    arg1[4].b |= 1
    arg1[5] = arg2
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            uint32_t rax_1
            
            if (data_143de5480 != 0)
                rax_1.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_1.b != 0)
                int64_t* arg_20 = arg1
                return sub_141fd8aa0(&arg_20)
        
        void var_28
        void** rax_3 = sub_141fddb80(&var_28, nullptr, 0xff)
        *(*rax_3 + 0x10) = arg1
        void* rcx_4 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_2 = rax_3[1]
        int64_t* rbx_1 = *(rcx_4 + 0x20)
        int64_t* arg_18 = rbx_1
        int32_t* rdi_2 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_2 += 1
            rbx_1 = arg_18
        
        result = sub_1405a5630(rcx_4, rdx_2, r8_1, 1)
        
        if (rbx_1 != 0)
            result = zx.q(*rdi_2)
            *rdi_2 -= 1
            
            if (result.d == 1)
                return sub_140a2f6e0(arg_18)
    else
        int64_t* arg_8 = arg1
        sub_141fe8dd0(&data_143a2dd30)
        result = sub_1405a7050(&data_143a2ddf0, &arg_8)
        int64_t rdi_1 = data_143f3d830
        int64_t rcx
        
        if (data_143de5480 == 0)
            rcx = 0
        else
            result = GetCurrentThreadId()
            rcx.b = result.d != data_143de5470
        
        if (*(rdi_1 + (rcx << 2)) s>= 0x400)
            arg1[4].b |= 2

return result

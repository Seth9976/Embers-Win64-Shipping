// 函数: sub_142ac3730
// 地址: 0x142ac3730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = *arg3
uint32_t rbx_1 = arg2 u>> 0x1c
int64_t rax = -1
char* _EndPtr = nullptr
int32_t rbp = arg2

do
    rax += 1
while (rdi[rax] != 0)

if (rax == 0)
    return zx.q(arg2)

if (rbx_1 u> 9 || not(test_bit(0x334, rbx_1)))
    return 0xffffffff

if (rdi != 0)
    while (*rdi != 0)
        if (rbp == 0xffffffff)
            break
        
        if (rbx_1 u> 9)
            break
        
        if (not(test_bit(0x334, rbx_1)))
            break
        
        char* rax_2 = strchr(rdi, 0x2f)
        void* rax_3
        
        if (rax_2 == 0)
            rax_3 = strchr(rdi, 0)
        else
            if (rax_2 == rdi)
                return 0xffffffff
            
            *rax_2 = 0
            rax_3 = &rax_2[1]
        
        *arg3 = rax_3
        int32_t rbx_2
        
        if (((rbx_1 - 2) & 0xfffffffc) == 0 && rbx_1 != 3)
            *arg4 = rdi
            void arg_10
            int32_t rax_5 = sub_142ac3d30(arg1, rbp, &arg_10, arg4)
            rbx_2 = rax_5
            
            if (rax_5 == 0xffffffff)
                int32_t rax_6 = strtol(rdi, &_EndPtr, 0xa)
                
                if (rax_6 s>= 0 && *_EndPtr == 0)
                    rbx_2 = sub_142ac3b90(arg1, rbp, rax_6, arg4)
        else if (rbx_1 - 8 u<= 1)
            int32_t rax_8 = strtol(rdi, &_EndPtr, 0xa)
            
            if (rax_8 s< 0 || *_EndPtr != 0)
                rbx_2 = -1
            else
                rbx_2 = sub_142ac3940(arg1, rbp, rax_8)
            
            *arg4 = 0
        else
            rbx_2 = -1
        
        rdi = *arg3
        rbp = rbx_2
        rbx_1 = rbx_2 u>> 0x1c
        
        if (rax_2 == 0)
            break

return zx.q(rbp)

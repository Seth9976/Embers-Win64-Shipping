// 函数: sub_1406c9350
// 地址: 0x1406c9350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3
int32_t result = arg5

if (arg3 != 0 || result != 0 || arg4 != 0)
    result = sub_1406d1960(arg1, arg3 + result, arg4)
    int64_t* r14_1 = *arg1
    
    if (i_1 != 0)
        void* rdi_1 = arg2 + 0x18
        void* rbx_1 = r14_1 + 0x5c
        int32_t i
        
        do
            int64_t* arg_8 = r14_1
            int64_t* var_38_1 = r14_1
            *r14_1 = 0
            int32_t rbp_1 = *(rdi_1 - 0x10)
            int64_t r15_1 = *(rdi_1 - 0x18)
            *(rbx_1 - 0x54) = rbp_1
            
            if (rbp_1 != 0)
                sub_1405a4c70(r14_1, rbp_1, 0)
                memcpy(*r14_1, r15_1, rbp_1 * 2)
            else
                *(rbx_1 - 0x50) = 0
            
            void* var_38_2 = rbx_1 - 0x4c
            *(rbx_1 - 0x4c) = 0
            int32_t rbp_2 = *rdi_1
            int64_t r13_1 = *(rdi_1 - 8)
            *(rbx_1 - 0x44) = rbp_2
            
            if (rbp_2 != 0)
                sub_1405a4c70(rbx_1 - 0x4c, rbp_2, 0)
                memcpy(*(rbx_1 - 0x4c), r13_1, rbp_2 * 2)
            else
                *(rbx_1 - 0x40) = 0
            
            void* var_38_3 = rbx_1 - 0x3c
            *(rbx_1 - 0x3c) = 0
            int64_t rbp_3 = sx.q(*(rdi_1 + 0x10))
            int64_t r13_2 = *(rdi_1 + 8)
            *(rbx_1 - 0x34) = rbp_3.d
            
            if (rbp_3.d != 0)
                sub_14061cb30(rbx_1 - 0x3c, rbp_3.d, 0)
                memcpy(*(rbx_1 - 0x3c), r13_2, (rbp_3 << 4).d)
            else
                *(rbx_1 - 0x30) = 0
            
            *(rbx_1 - 0x2c) = *(rdi_1 + 0x18)
            *(rbx_1 - 0x28) = *(rdi_1 + 0x1c)
            *(rbx_1 - 0x24) = *(rdi_1 + 0x20)
            *(rbx_1 - 0x20) = *(rdi_1 + 0x24)
            *(rbx_1 - 0x1c) = *(rdi_1 + 0x28)
            *(rbx_1 - 0x18) = *(rdi_1 + 0x2c)
            *(rbx_1 - 0x14) = *(rdi_1 + 0x30)
            void* var_38_4 = rbx_1 - 0xc
            *(rbx_1 - 0xc) = 0
            int64_t rbp_4 = sx.q(*(rdi_1 + 0x40))
            int64_t r13_3 = *(rdi_1 + 0x38)
            *(rbx_1 - 4) = rbp_4.d
            
            if (rbp_4.d != 0)
                sub_14061cb30(rbx_1 - 0xc, rbp_4.d, 0)
                memcpy(*(rbx_1 - 0xc), r13_3, (rbp_4 << 4).d)
            else
                *rbx_1 = 0
            
            *(rbx_1 + 4) = *(rdi_1 + 0x48)
            *(rbx_1 + 8) = *(rdi_1 + 0x4c)
            *(rbx_1 + 0xc) = *(rdi_1 + 0x50)
            result = sub_1406ca210(rbx_1 + 0x14, rdi_1 + 0x58)
            r14_1 = &r14_1[0x2f]
            rbx_1 += 0x178
            rdi_1 += 0x178
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg1 + 0xc) = 0

return result

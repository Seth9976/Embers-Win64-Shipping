// 函数: sub_142088010
// 地址: 0x142088010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_14208af70(arg1, arg2)

if (result != 0)
    void* rax = *(result + 0x28)
    int64_t rbp_1 = 0
    void** r14_1 = *(rax + 0x30)
    result = &r14_1[sx.q(*(rax + 0x38))]
    uint64_t r12_2 = sx.q(*(rax + 0x38)) << 3 u>> 3
    
    if (r14_1 u> result)
        r12_2 = 0
    
    if (r12_2 != 0)
        result = zx.q(arg3) ^ 1
        int32_t r13_1 = (result << 2).d
        
        do
            void* rbx_1 = *r14_1
            int32_t i = 0
            *(rbx_1 + 0x68) &= 0xfffffffb
            *(rbx_1 + 0x68) |= r13_1
            
            if (*(rbx_1 + 0x40) s> 0)
                void** rdi_1 = nullptr
                
                do
                    result = sub_142088120(*(rdi_1 + *(rbx_1 + 0x38)), arg3, 1)
                    i += 1
                    rdi_1 = &rdi_1[1]
                while (i s< *(rbx_1 + 0x40))
            
            r14_1 = &r14_1[1]
            rbp_1 += 1
        while (rbp_1 != r12_2)

int64_t rcx_3 = *arg2

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall

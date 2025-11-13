// 函数: sub_140ff8480
// 地址: 0x140ff8480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* result = sub_14081d930(arg1 + 0x17ce0, arg2)

if (data_143e2b8ec != 0)
    result = sub_140fce4e0(arg1 - 0x18)

if (arg2 != 0)
    uint64_t rbp_1 = 0
    
    if (*(arg2 + 0xa8) s> 0)
        char* r14_1 = nullptr
        
        do
            result = *(arg2 + 0xa0)
            char rdx = *(r14_1 + result)
            
            if (rdx u< 0xff)
                void* r12_1 = *(*(arg1 + 0x43a8) + (zx.q(rdx) << 3))
                result = *(arg2 + 0x70)
                
                if (r12_1 != 0)
                    int64_t* rbx_1 = *(r12_1 + 0x28)
                    
                    if (rbx_1 != 0)
                        (*(*rbx_1 + 8))(rbx_1)
                    
                    if (rbx_1 != 0)
                        (*(*rbx_1 + 0x10))(rbx_1)
                    
                    arg_8.q = rbx_1
                    void* rax_7 = ((zx.q(rbp_1.d) + 0x23b) << 4) + arg1 + 0x158
                    
                    if (*rax_7 != rbx_1 || *(rax_7 + 8) != 0 || *(rax_7 + 0xc) != 0x1000)
                        *rax_7 = rbx_1
                        *(rax_7 + 8) = 0
                        *(rax_7 + 0xc) = 0x1000
                        int64_t* rcx_8 = *(arg1 + 0x170)
                        (*(*rcx_8 + 0x238))(rcx_8, zx.q(rbp_1.d), 1, &arg_8)
                    
                    sub_1405d16e0(arg1 + 0x4328 + (rbp_1 << 3), r12_1)
                    result = zx.q(*(arg1 + 0x43a2)) | zx.q(1 << (rbp_1.d u% 0x20))
                    *(arg1 + 0x43a2) = result.w
            
            rbp_1 = zx.q(rbp_1.d + 1)
            r14_1 = &r14_1[1]
        while (rbp_1.d s< *(arg2 + 0xa8))

return result

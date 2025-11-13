// 函数: sub_1426d5230
// 地址: 0x1426d5230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14
r14.b = 0

if (*(arg1 + 0x80) != 0)
    void* rax_1 = sub_14272ef20()
    
    if (rax_1 != 0)
        void* rdx = *(arg1 + 0x80)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rdx != 0)
            int32_t* rdi_1 = nullptr
            int64_t* rbx_1
            
            if (rdx == 0)
                rbx_1 = nullptr
            else
                void* rax_4 = sub_14272ef20()
                
                if (rax_4 == 0)
                    rbx_1 = nullptr
                else
                    rbx_1 = *(arg1 + 0x80)
                    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_5.d s> rbx_1[7].d || *(rbx_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
                        rbx_1 = nullptr
            
            int64_t* r10_1 = rbx_1[0x23]
            
            if (r10_1 == 0)
                (*(*rbx_1 + 0x390))(rbx_1)
                r10_1 = rbx_1[0x23]
            
            if (*(arg2 + 0xd0) != 0)
                uint32_t rcx_3 = zx.d(*(arg1 + 0x88))
                
                if (rcx_3 s< *(arg2 + 0xe0))
                    rdi_1 = zx.q(*(*(arg2 + 0xd8) + (zx.q(rcx_3.b) << 1))) + *(arg2 + 0xc8)
            
            if (r10_1 != 0 && rdi_1 != 0)
                uint32_t rdx_2 = zx.d(*(r10_1 + 0x2a))
                
                if (rdx_2 == 0)
                    r14 = zx.q(sub_1426c3580(r10_1, arg2, rdi_1, zx.q(*(arg1 + 0xb8))))
                else if (rdx_2 == 1)
                    r14 = zx.q(sub_1426c3540(r10_1, arg2, rdi_1, zx.q(*(arg1 + 0xb8)), 
                        *(arg1 + 0x90), *(arg1 + 0x94)))
                else if (rdx_2 == 2)
                    int32_t var_18
                    var_18.q = arg1 + 0x98
                    r14 = zx.q(sub_1426c35d0(r10_1, arg2, rdi_1, zx.q(*(arg1 + 0xb8)), var_18))

return zx.q(r14.b)

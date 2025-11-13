// 函数: sub_1406426d0
// 地址: 0x1406426d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg1 != 0)
    void* rbx_1 = *(arg1 + 0x298)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_142531230()
        void* r9_1 = *(rbx_1 + 0x10)
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(r9_1 + 0x38) && *(*(r9_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
            void* rbx_2 = *(rbx_1 + 0x70)
            
            if (rbx_2 != 0)
                void* rax_2 = sub_1424bff10()
                void* rdx = *(rbx_2 + 0x10)
                rax = sx.q(*(rax_2 + 0x38))
                
                if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_2 + 0x30)
                    int64_t* rbx_3 = *(rbx_2 + 0xb8)
                    
                    if (rbx_3 != 0)
                        *arg2 = _mm_cvtepi32_ps(zx.o((*(*rbx_3 + 0xc0))(rbx_3))).d
                        int32_t rax_6
                        rax_6.b = 1
                        *arg3 = _mm_cvtepi32_ps(zx.o((*(*rbx_3 + 0xc8))(rbx_3))).d
                        return rax_6

rax.b = 0
return rax

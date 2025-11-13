// 函数: sub_141bae4a0
// 地址: 0x141bae4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (rbx != 0)
    void* rax_1 = sub_141c122a0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* var_18 = rbx
        void* var_10_1 = sub_140d21950(rbx, sub_141c00390())
        void* rax_6
        int512_t zmm1_1
        rax_6, zmm1_1 = sub_141baf3a0(&var_18)
        
        if (rax_6 != 0)
            void* rax_7 = sub_141c00910()
            void* rcx_3 = *(rax_6 + 0x10)
            int64_t rdx_3 = sx.q(*(rax_7 + 0x38))
            
            if (rdx_3.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_3 << 3)) == rax_7 + 0x30)
                int64_t* rax_9 = sub_141bb9220(rax_6 + 0x218, rbx, zmm1_1)
                
                if (rax_9 != 0)
                    return *rax_9

return 0

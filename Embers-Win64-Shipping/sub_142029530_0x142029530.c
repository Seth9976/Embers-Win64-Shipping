// 函数: sub_142029530
// 地址: 0x142029530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x220) != 0)
    void* rax_1 = sub_1424b14e0()
    
    if (rax_1 != 0)
        void* rdx_1 = *(arg1 + 0x220)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rdx_1 != 0)
            void* rax_4 = sub_1424b14e0()
            int64_t rax_5
            int64_t* rbx_1
            
            if (rax_4 != 0)
                rbx_1 = *(arg1 + 0x220)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> rbx_1[7].d || *(rbx_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rbx_1 = nullptr
            
            int64_t result = rbx_1[0x23]
            
            if (result != 0)
                return result
            
            (*(*rbx_1 + 0x390))(rbx_1)
            return rbx_1[0x23]

return 0

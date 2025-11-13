// 函数: sub_14202a9b0
// 地址: 0x14202a9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (*(arg1 + 0x220) != 0)
    void* rax_1
    rax_1, result = sub_1424b14e0()
    
    if (rax_1 != 0)
        void* rdx_1 = *(arg1 + 0x220)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rdx_1 != 0)
            void* rax_4
            rax_4, result = sub_1424b14e0()
            int64_t rax_5
            int64_t* rbx_1
            
            if (rax_4 != 0)
                rbx_1 = *(arg1 + 0x220)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> rbx_1[7].d || *(rbx_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rbx_1 = nullptr
            
            void* rdi_1 = rbx_1[0x23]
            
            if (rdi_1 != 0)
            label_14202aa5c:
                void* rax_8
                rax_8, result = sub_1424b25d0()
                void* rdx_3 = *(rdi_1 + 0x10)
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s<= *(rdx_3 + 0x38)
                        && *(*(rdx_3 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                    result.o = *(rdi_1 + 0x2d8)
                    return result
            else
                (*(*rbx_1 + 0x390))(rbx_1)
                rdi_1 = rbx_1[0x23]
                
                if (rdi_1 != 0)
                    goto label_14202aa5c

result.o = 0x3f800000
return result

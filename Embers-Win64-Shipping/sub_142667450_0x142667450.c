// 函数: sub_142667450
// 地址: 0x142667450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x90)
int64_t result = sx.q(*(arg1 + 0x98))

for (void* rbp = &i[result]; i != rbp; i = &i[1])
    void* rsi_1 = *i
    
    if (rsi_1 != 0)
        void* rax = sub_1426a09e0()
        int64_t* rdi_1 = *(rsi_1 + 0x10)
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= rdi_1[7].d)
            int64_t result_1 = result
            result = rdi_1[6]
            
            if (*(result + (result_1 << 3)) == rax + 0x30)
                void* rax_1 = rdi_1[0x23]
                
                if (rax_1 == 0)
                    (*(*rdi_1 + 0x390))(rdi_1)
                    rax_1 = rdi_1[0x23]
                
                result = sub_142696170(rsi_1, *(rax_1 + 0x43c))

return result

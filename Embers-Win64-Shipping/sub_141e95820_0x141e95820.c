// 函数: sub_141e95820
// 地址: 0x141e95820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1
int64_t result

do
    result = *(arg2 + 0x10)
    int64_t rdx = sx.q(*(i + 0x38))
    
    if (rdx.d s> *(result + 0x38))
        break
    
    result = *(result + 0x30)
    
    if (*(result + (rdx << 3)) != i + 0x30)
        break
    
    void* rax_1 = sub_14247bf70()
    void* rdx_1 = *(i + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rax_6 = sub_140bdf670()
        void* rdx_3 = *(i + 0x10)
        result = sx.q(*(rax_6 + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38))
            int64_t result_1 = result
            result = *(rdx_3 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_6 + 0x30)
                int64_t** j = *(i + 0x260)
                result = sx.q(*(i + 0x268))
                
                for (void* rsi_3 = &j[result]; j != rsi_3; j = &j[1])
                    int64_t* rdi_2 = *j
                    
                    if (rdi_2 != 0)
                        void* rax_7 = sub_1424a0e60()
                        void* rcx_3 = rdi_2[2]
                        result = sx.q(*(rax_7 + 0x38))
                        
                        if (result.d s<= *(rcx_3 + 0x38))
                            int64_t result_2 = result
                            result = *(rcx_3 + 0x30)
                            
                            if (*(result + (result_2 << 3)) == rax_7 + 0x30)
                                result = (*(*rdi_2 + 0x260))(rdi_2, arg2)
    else
        int64_t rdi_1 = 0
        int64_t* rbx_1 = *(i + 0x238)
        result = &rbx_1[sx.q(*(i + 0x240))]
        uint64_t rsi_2 = sx.q(*(i + 0x240)) << 3 u>> 3
        
        if (rbx_1 u> result)
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int64_t* rcx_2 = *rbx_1
                
                if (rcx_2 != 0)
                    result = (*(*rcx_2 + 0x260))(rcx_2, arg2)
                
                rbx_1 = &rbx_1[1]
                rdi_1 += 1
            while (rdi_1 != rsi_2)
    
    i = *(i + 0x40)
while (i != 0)

return result

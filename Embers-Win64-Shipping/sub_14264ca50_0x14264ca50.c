// 函数: sub_14264ca50
// 地址: 0x14264ca50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*(arg2 + 0x44), 0) == 0

if ((*(arg2 + 0x48) != 0 | r8) != 0)
    *(arg1 + 0x38) = *(arg2 + 0x44)

*(arg1 + 0x88) = *(arg2 + 0x40)
int128_t zmm6 = sub_142649710(arg1)
int32_t rbx_1 = *(arg1 + 0x3c)
int64_t rax_3 = sub_140b5b8a0(*(arg1 + 0x38), 0)
uint64_t rcx_2
rcx_2.b = rbx_1 == 0

if ((rcx_2.b & rax_3.b) != 0)
    rax_3 = zx.q(*(arg1 + 0x80))
    
    if (rax_3.d == 1)
        void* rax_4 = *(arg1 + 0x78)
        *(arg1 + 0x38) = *(rax_4 + 0x30)
        return rax_4
    
    int32_t i = 0
    
    if (rax_3.d s> 0)
        int64_t rsi_1 = 0
        int128_t var_28_1 = zmm6
        zmm6 = zx.o(0)
        
        do
            rax_3 = *(arg1 + 0x78)
            
            if (zmm6.d f> *(rsi_1 + rax_3 + 4) || zmm6.d f> *(rsi_1 + rax_3 + 8))
                rcx_2.b = 0
            else
                rcx_2.b = 1
            
            if (rcx_2.b == 0)
                rax_3.b = 0
            else
                int32_t* rdi_2 = rax_3 + 0x50 + rsi_1
                rax_3 = sub_140d3c6e0(rdi_2)
                int64_t rbx_2 = rax_3
                
                if (rax_3 != 0)
                label_14264cb9b:
                    void* rax_7
                    rax_7, rcx_2, zmm6 = sub_140bdf2e0()
                    void* rdx_1 = *(rbx_2 + 0x10)
                    rax_3 = sx.q(*(rax_7 + 0x38))
                    
                    if (rax_3.d s> *(rdx_1 + 0x38))
                        rax_3.b = 0
                    else if (*(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_7 + 0x30)
                        rax_3.b = 0
                    else
                        rax_3, rcx_2 = sub_142452380()
                        
                        if (rax_3 == 0)
                            rax_3.b = 0
                        else
                            int64_t rdx_2 = rax_3 + 0x30
                            rax_3 = sx.q(*(rax_3 + 0x38))
                            
                            if (rax_3.d s> *(rbx_2 + 0x38))
                                rax_3.b = 0
                            else if (*(*(rbx_2 + 0x30) + (rax_3 << 3)) != rdx_2)
                                rax_3.b = 0
                            else
                                rax_3.b = 1
                else if (*(rdi_2 + 0x10) == 0)
                    rax_3.b = 0
                else
                    if (rax_3.d == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_3 = zx.q(data_1439aaa30)
                    
                    if (rax_3.d != rdi_2[2] || *rdi_2 != 0xffffffff)
                        void* rax_5
                        rax_5, zmm6 = sub_140d2bce0(&rdi_2[4])
                        sub_140d3a3a0(rdi_2, rax_5)
                        
                        if (rax_5 != 0 || data_143e1d7b4 == 0)
                            int32_t rax_6 = 0
                            
                            if (0 == data_1439aaa30)
                                data_1439aaa30 = 0
                            else
                                rax_6 = data_1439aaa30
                            
                            rdi_2[2] = rax_6
                        
                        rax_3, rcx_2 = sub_140d3c6e0(rdi_2)
                        rbx_2 = rax_3
                        
                        if (rax_3 != 0)
                            goto label_14264cb9b
                        
                        rax_3.b = 0
                    else
                        rax_3.b = 0
            
            if (rax_3.b != 0)
                rax_3 = *(arg1 + 0x78)
                *(arg1 + 0x38) = *(sx.q(i) * 0x78 + rax_3 + 0x30)
                break
            
            i += 1
            rsi_1 += 0x78
        while (i s< *(arg1 + 0x80))

return rax_3

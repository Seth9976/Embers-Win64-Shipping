// 函数: sub_141dc81d0
// 地址: 0x141dc81d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = arg2

if ((*(arg2 + 0xb0) & 0x2000) == 0 && data_143de5422 == 0 && (*(*arg1 + 0x150))() != 0)
    uint32_t rsi_1 = zx.d(arg1[0x1e].b)
    void* rcx = nullptr
    int32_t rbp_1
    
    if (rsi_1 u< 3)
        rbp_1 = 0
    
    if (rsi_1 u>= 3 || ((*(i_1 + 0xb0) u>> 2).b & 1) == 0)
        rbp_1 = 2
    
    int32_t rax_5 = *(arg1 + 0xc)
    
    if (rax_5 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_5)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_7 = temp1_1 + rdx_1
        rcx = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_1) * 0x18
    
    if (((*(rcx + 8) u>> 0x1d).b & 1) != 0)
        return rbp_1
    
    int32_t rax_13 = *(i_1 + 0xb0)
    
    if (test_bit(rax_13, 8))
        return 1
    
    if (not(test_bit(rax_13, 0xc)))
        int32_t rax_14 = sub_141dcdc50(arg1)
        
        if (rax_14 != 0)
            if (rax_14 == 1 && (rax_14.b & (*(i_1 + 0xb0) u>> 3).b) != 0)
                return 0
            
            if ((not.b((*(i_1 + 0xb0) u>> 6).b) & 1) != 0)
                return rbp_1
            
            void* i = *(i_1 + 0x40)
            int32_t rcx_6
            rcx_6.b = rax_14 - 1 u<= 1
            
            for (; i != 0; i = *(i + 0x40))
                i_1 = i
            
            int32_t rax_20 = *(i_1 + 0xb0)
            
            if (not(test_bit(rax_20, 0xe)))
                if (rcx_6.b == 0)
                    if ((not.b((rax_20 u>> 0x15).b) & 1) != 0)
                        return rbp_1
                else if ((not.b((rax_20 u>> 0x18).b) & 1) != 0)
                    return rbp_1
                
                if (rsi_1.b == 3)
                    void* rax_24 = (*(*arg1 + 0x4a0))(arg1)
                    
                    if (rax_24 != 0)
                        void* rax_32 = *(rax_24 + 0x58)
                        
                        if (rax_32 == 0 || *(rax_32 + 0x140) == 0 || *(arg1 + 0x5f) == 0)
                            return 0
                        
                        return 1
                    
                    void* rax_26 = (*(*arg1 + 0x498))(arg1)
                    
                    if (rax_26 == 0)
                        if ((*(*arg1 + 0x270))(arg1) != 0)
                            return 0
                        
                        return rbp_1
                    
                    void* rax_29 = sub_142531230()
                    void* rdx_3 = *(rax_26 + 0x10)
                    int64_t rax_30 = sx.q(*(rax_29 + 0x38))
                    
                    if (rax_30.d s<= *(rdx_3 + 0x38)
                            && *(*(rdx_3 + 0x30) + (rax_30 << 3)) == rax_29 + 0x30)
                        return rbp_1
                
                if (*(arg1 + 0x5f) != 0)
                    return 1
                
                return 0
            
            if (rcx_6.b == 0)
                return rbp_1
            
            if (*(arg1 + 0x5f) != 0)
                return 3
        else if (rsi_1 u< 3 && (*(i_1 + 0xb0) & 0x200000) != 0)
            return rax_14
    else if (*(i_1 + 0xba) u<= 0)
        return 0

return 2

// 函数: sub_142271a20
// 地址: 0x142271a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    *arg2 = zx.d(*(arg1 + 0x3d4))

void* i_1 = arg1[0x53]

if (i_1 == 0)
    uint32_t rax
    rax.b = 0
    return rax

void* rax_1 = sub_142531230()
void* rdx = *(i_1 + 0x10)
int64_t rax_2 = sx.q(*(rax_1 + 0x38))
int64_t rcx

if (rax_2.d s<= *(rdx + 0x38))
    rcx = rax_2

if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rcx << 3)) != rax_1 + 0x30)
    void* const i = arg1[0x53]
    
    if (i == 0)
        i = nullptr
    else
        void* rax_7 = sub_14254f450()
        void* rdx_4 = *(i + 0x10)
        rax_2 = sx.q(*(rax_7 + 0x38))
        
        if (rax_2.d s> *(rdx_4 + 0x38))
            i = nullptr
        else if (*(*(rdx_4 + 0x30) + (rax_2 << 3)) != rax_7 + 0x30)
            i = nullptr
    
    if (*(i + 0x50) s<= 0)
        void* rax_8 = sub_1424929c0()
        void* rdx_5 = *(i + 0x10)
        rax_2 = sx.q(*(rax_8 + 0x38))
        
        if (rax_2.d s> *(rdx_5 + 0x38))
            rax_2.b = 0
        else if (*(*(rdx_5 + 0x30) + (rax_2 << 3)) != rax_8 + 0x30)
            rax_2.b = 0
        else
            if (arg2 != 0)
                rax_2 = *(i + 0x1a30)
                
                if (rax_2 != 0)
                    int64_t* r8_4 = *(rax_2 + 0x48)
                    int64_t* rcx_8 = r8_4
                    void* rdx_6 = &r8_4[sx.q(*(rax_2 + 0x50))]
                    
                    if (r8_4 == rdx_6)
                    label_142271bb6:
                        *arg2 = 0
                    else
                        while (*rcx_8 != i)
                            rcx_8 = &rcx_8[1]
                            
                            if (rcx_8 == rdx_6)
                                goto label_142271bb6
                        
                        *arg2 = ((rcx_8 - r8_4) s>> 3).d + 1
            
            rax_2.b = 1
    else
        if (arg2 != 0)
            *arg2 = 0
        
        rax_2.b = 1
else
    void* rsi_1
    
    if (((*(i_1 + 8) u>> 4).b & 1) == 0)
        rsi_1 = *(i_1 + 0x20)
    else
        rsi_1 = nullptr
    
    rax_2 = sub_1423dd2a0(rsi_1, (*(*arg1 + 0x150))(arg1))
    int64_t rdx_2 = sx.q(*(rax_2 + 8))
    
    if (rdx_2.d s<= 1)
        rax_2.b = 0
    else
        if (arg2 != 0)
            int64_t* r8_1 = *rax_2
            int64_t* rcx_3 = r8_1
            void* rdx_3 = &r8_1[rdx_2]
            uint32_t rcx_4
            
            if (r8_1 == rdx_3)
            label_142271adf:
                rcx_4 = -1
            else
                while (*rcx_3 != i_1)
                    rcx_3 = &rcx_3[1]
                    
                    if (rcx_3 == rdx_3)
                        goto label_142271adf
                
                rcx_4 = ((rcx_3 - r8_1) s>> 3).d
            
            *arg2 = rcx_4
        
        rax_2.b = 1

return rax_2

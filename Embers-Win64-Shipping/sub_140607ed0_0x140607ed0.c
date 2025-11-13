// 函数: sub_140607ed0
// 地址: 0x140607ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_3 = arg1
int64_t var_48 = -2
uint64_t result_4 = arg1
char var_94 = 0
void* rdi = *(arg1 + 0x40)
uint64_t result = EnterCriticalSection(rdi + 0xa0)
char r15 = *(rdi + 0xf0)
char rdi_1 = *(rdi + 0x158)

if (rdi != -0xa0)
    result = LeaveCriticalSection(rdi + 0xa0)

if (r15 != 0)
    int64_t* rcx_2 = *(result_4 + 0x20)
    result = (**rcx_2)(rcx_2, 9)

if (rdi_1 != 0)
    char rax_1 = sub_140b74110(0xa, 0)
    
    if (rax_1 != 0)
        int64_t* rax_2 = sub_14060a8e0()
        result = rax_2[0x23]
        
        if (result == 0)
            int64_t rdx_1 = *rax_2
            (*(rdx_1 + 0x390))(rax_2, rdx_1)
            result = rax_2[0x23]
    
    int64_t* lpCriticalSection
    
    if (rax_1 == 0 || *(result + 0x2b) != 0)
        int64_t* rax_3 = sub_14060a8e0()
        void* rax_4 = rax_3[0x23]
        
        if (rax_4 == 0)
            int64_t rdx_2 = *rax_3
            (*(rdx_2 + 0x390))(rax_3, rdx_2)
            rax_4 = rax_3[0x23]
        
        result = sub_1405fa740(*(result_4 + 0x38), *(rax_4 + 0x29))
        int64_t* rdi_2 = *(result_4 + 0x40)
        
        if (rdi_2[0x1d] != 0)
            int128_t var_58 = zx.o(0)
            int64_t* lpCriticalSection_1
            sub_1405fe230(&lpCriticalSection_1, &var_58, &rdi_2[0x1b], 0)
            int32_t rax_6 = (*(rdi_2[1] + 0x18))(&rdi_2[1], 6)
            int64_t r9_1 = rdi_2[1]
            int32_t rax_7 = (*(r9_1 + 0x28))(&rdi_2[1], 6, zx.q(rax_6), r9_1, r15, rdi_2)
            int64_t r8_3 = rdi_2[1]
            int32_t rax_8 = (*(r8_3 + 0x18))(&rdi_2[1], 0, r8_3)
            int64_t r9_2 = rdi_2[1]
            int32_t rax_9 = (*(r9_2 + 0x28))(&rdi_2[1], 0, zx.q(rax_8), r9_2)
            int64_t r9_3 = rdi_2[1]
            int512_t entry_zmm2
            int32_t rax_10 = (*(r9_3 + 0x18))(&rdi_2[1], 1, entry_zmm2, r9_3)
            int64_t r9_4 = rdi_2[1]
            int32_t rax_11 = (*(r9_4 + 0x28))(&rdi_2[1], 1, zx.q(rax_10), r9_4)
            lpCriticalSection = lpCriticalSection_1
            sub_1405fa9d0(rdi_2, lpCriticalSection, &rdi_2[0x1b], nullptr)
            (*(rdi_2[1] + 0x50))(&rdi_2[1], 6, zx.q(rax_6), zx.q(rax_7))
            int64_t r9_6 = rdi_2[1]
            (*(r9_6 + 0x48))(&rdi_2[1], 6, zx.q(rax_6), r9_6)
            (*(rdi_2[1] + 0x50))(&rdi_2[1], 0, zx.q(rax_8), zx.q(rax_9))
            (*(rdi_2[1] + 0x48))(&rdi_2[1], 0, zx.q(rax_8))
            (*(rdi_2[1] + 0x50))(&rdi_2[1], 1, zx.q(rax_10), zx.q(rax_11))
            result = (*(rdi_2[1] + 0x48))(&rdi_2[1], 1, zx.q(rax_10))
            
            if (lpCriticalSection != 0)
                result = (*(*lpCriticalSection + 0x10))(lpCriticalSection)
            
            result_4 = result_3
    
    void* rcx_21 = *(result_4 + 0x40)
    int64_t* var_80
    int64_t* rax_17
    void* rsi_2
    uint64_t result_1
    
    if (*(rcx_21 + 0xe8) != 0)
        rax_17 = sub_1405f4750(rcx_21, &var_80)
        var_94 = 1
        void* rdi_4 = *(result_4 + 0x40)
        int64_t* var_88_1 = rdi_4 + 0xa0
        result = EnterCriticalSection(rdi_4 + 0xa0)
        int64_t* rcx_23 = *(rdi_4 + 0x140)
        
        if (rcx_23 != 0)
            result_3 = 0
            result = (*(*rcx_23 + 0x40))(rcx_23, &data_142d5b298, &result_3)
            result_1 = result_3
            uint64_t result_2 = result_1
        else
            result_1 = 0
            int64_t var_70_1 = 0
        
        if (rdi_4 != -0xa0)
            result = LeaveCriticalSection(rdi_4 + 0xa0)
            int64_t var_88_2 = 0
        
        rsi_2 = *(result_4 + 0x38)
    
    if (*(rcx_21 + 0xe8) == 0 || *(rsi_2 + 0x60) == 0)
        lpCriticalSection.b = 1
    else
        lpCriticalSection = rsi_2 + 0x18
        EnterCriticalSection(lpCriticalSection)
        
        if (*(rsi_2 + 0xc4) != 4)
            int64_t* rdx_7 = *rax_17
            
            if (*(rsi_2 + 0x78) == 0)
                sub_1405f2520(rsi_2, rdx_7)
            else
                int64_t* rcx_29 = *(rsi_2 + 0xa8)
                
                if (rcx_29 != rdx_7)
                    if (rdx_7 != 0)
                        (*(*rdx_7 + 8))(rdx_7)
                        rcx_29 = *(rsi_2 + 0xa8)
                    
                    if (rcx_29 != 0)
                        (*(*rcx_29 + 0x10))(rcx_29)
                    
                    *(rsi_2 + 0xa8) = *rax_17
        else
            int64_t r8_14 = *rax_17
            int64_t* rax_21
            
            if (r8_14 == 0)
                sub_1406084c0(rsi_2)
                *(rsi_2 + 0xc4) = 5
                rax_21 = j_sub_140a82f30(0x10)
                int64_t* var_60_2 = rax_21
                
                if (rax_21 != 0)
                    rax_21[1].d = 3
                label_14060826a:
                    *rax_21 = 0
                    void** rcx_28 = *(rsi_2 + 0x50)
                    *(rsi_2 + 0x50) = rax_21
                    *rcx_28 = rax_21
            else
                int64_t* rcx_26 = *(rsi_2 + 0x60)
                
                if ((*(*rcx_26 + 0x38))(rcx_26, 1, r8_14) s< 0)
                    *(rsi_2 + 0xc4) = 1
                    rax_21 = j_sub_140a82f30(0x10)
                    int64_t* var_60_1 = rax_21
                    
                    if (rax_21 != 0)
                        rax_21[1].d = 4
                        goto label_14060826a
        
        result = result_1
        *(rsi_2 + 0x40) = result
        
        if (lpCriticalSection != 0)
            result = LeaveCriticalSection(lpCriticalSection)
        
        lpCriticalSection.b = 0
    
    if ((var_94 & 1) != 0)
        int64_t* rcx_33 = var_80
        
        if (rcx_33 != 0)
            result = (*(*rcx_33 + 0x10))(rcx_33)
    
    if (lpCriticalSection.b != 0)
        sub_1405ffa80(*(result_4 + 0x38))
        int64_t* rcx_35 = *(result_4 + 0x20)
        result = (**rcx_35)(rcx_35, 4)

if (r15 != 0 || rdi_1 != 0)
    void* rdi_5 = *(result_4 + 0x40)
    result = EnterCriticalSection(rdi_5 + 0xa0)
    *(rdi_5 + 0xf0) = 0
    *(rdi_5 + 0x158) = 0
    
    if (rdi_5 != -0xa0)
        return LeaveCriticalSection(rdi_5 + 0xa0)

return result

// 函数: sub_1422e1ae0
// 地址: 0x1422e1ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint32_t rcx = zx.d(arg1[1].b)
uint64_t result
void* lpCriticalSection

if (rcx == 0)
    result = *arg1
    
    if (*(result + 0x28) != 0)
        lpCriticalSection = &arg1[2]
        EnterCriticalSection(lpCriticalSection)
        *(*arg1 + 0x30) = 1
        sub_1422dd890(*arg1)
        *(*arg1 + 0x30) = 3
    label_1422e1bdc:
        
        if (lpCriticalSection == 0)
            goto label_1422e1bed
        
        LeaveCriticalSection(lpCriticalSection)
    label_1422e1bed:
        int128_t* rdx_1 = arg1[0xa]
        int64_t rbx_1 = *(*arg1 + 0x28)
        int64_t rax_8 = arg1[8]
        arg1[0xa] = 0
        int128_t zmm1 = *(arg1 + 0x70)
        int128_t var_38 = *(arg1 + 0x60)
        int128_t var_28_1 = zmm1
        
        if (rax_8 != 0)
            arg1[8] = 0
        
        int128_t* var_98 = nullptr
        
        if (rax_8 != 0)
            int128_t* rcx_13 = &var_38
            
            if (rdx_1 != 0)
                rcx_13 = rdx_1
            
            (**rcx_13)(rcx_13, &var_98)
        
        void*** rax_10 = sub_140a82f30(0x60, 0x10)
        *rax_10 = &data_142d577c0
        rax_10[2] = rax_8
        rax_10[4] = var_98
        int128_t var_88
        int128_t zmm0_1 = var_88
        var_98 = nullptr
        *(rax_10 + 0x30) = zmm0_1
        int128_t var_78
        *(rax_10 + 0x40) = var_78
        int64_t rax_11 = rax_8
        
        if (rax_10[2] != 0)
            rax_11 = 0
        
        rax_10[0xa] = rbx_1
        *rax_10 = &data_143251948
        int64_t (* var_e8)(void* arg1)
        int64_t (* rax_13)(void* arg1) = var_e8
        
        if (rax_10 != -0x10)
            rax_13 = sub_1422df240
        
        void*** var_d8_1 = rax_10
        var_e8 = rax_13
        result = sub_140a20e40(2, &var_e8)
        
        if (rax_11 != 0)
            int128_t* rax_14 = var_98
            int128_t* rcx_16 = &var_88
            
            if (rax_14 != 0)
                rcx_16 = rax_14
            
            result = (*(*rcx_16 + 0x10))(rcx_16)
        
        if (rax_8 != 0)
            int128_t* rcx_17 = &var_38
            
            if (rdx_1 != 0)
                rcx_17 = rdx_1
            
            result = (*(*rcx_17 + 0x10))(rcx_17)
    else
        *(result + 0x30) = 4
else if (rcx == 1)
    result = *arg1
    
    if (*(result + 0x28) != 0)
        lpCriticalSection = &arg1[2]
        EnterCriticalSection(lpCriticalSection)
        *(*arg1 + 0x30) = 1
        sub_1422dd890(*arg1)
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
        
        goto label_1422e1b59
    
    *(result + 0x30) = 4
else
    if (rcx != 2)
        if (rcx != 3)
            goto label_1422e1bed
        
        lpCriticalSection = &arg1[2]
        EnterCriticalSection(lpCriticalSection)
        *(*arg1 + 0x30) = 2
        sub_1422f1f20(*arg1)
        goto label_1422e1bdc
    
    result = *arg1
    
    if (*(result + 0x28) != 0)
        lpCriticalSection = &arg1[2]
    label_1422e1b59:
        EnterCriticalSection(lpCriticalSection)
        *(*arg1 + 0x30) = 2
        sub_1422f2100(*arg1)
        goto label_1422e1bdc
    
    *(result + 0x30) = 4
__security_check_cookie(rax_1 ^ &var_108)
return result

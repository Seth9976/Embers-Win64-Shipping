// 函数: sub_140b480d0
// 地址: 0x140b480d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int16_t* const rbp = &data_142d40450
int64_t* rcx = *(arg1 + 0x28)

if (rcx == 0)
    void var_f8
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_f8)
    int32_t var_128
    
    if (sub_140a32ae0(arg1 + 0x18, u"{PROJECT}", 1) != 0)
        int64_t var_108
        int64_t* rax_3 = sub_140b251a0(&var_108)
        int16_t* const r9_1
        
        if (rax_3[1].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *rax_3
        
        var_128 = 1
        int64_t var_118
        int64_t* rax_4 = sub_140a300d0(arg1 + 0x18, &var_118, u"{PROJECT}", r9_1, var_128)
        
        if (arg1 + 0x18 != rax_4)
            int64_t rcx_5 = *(arg1 + 0x18)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            *(arg1 + 0x18) = *rax_4
            *rax_4 = 0
            *(arg1 + 0x20) = rax_4[1].d
            *(arg1 + 0x24) = *(rax_4 + 0xc)
            rax_4[1] = 0
        
        int64_t rcx_7 = var_118
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = var_108
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    
    *(arg1 + 0x28) = sub_140a491d0(0)
    sub_140a464c0()
    int16_t* const rdx_2
    
    if (*(arg1 + 0x20) == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *(arg1 + 0x18)
    
    int64_t* rax_9 = (*(data_14399ea08 + 0x18))(&data_14399ea08, rdx_2, 0)
    
    if (rax_9 != 0)
        int64_t rdx_3 = *rax_9
        int64_t rax_10 = (*(rdx_3 + 0x28))(rax_9, rdx_3)
        *(arg1 + 0x10) = rax_10
        int64_t rax_11 = sub_140a82f30(rax_10, 0)
        int64_t r8_1 = *(arg1 + 0x10)
        *(arg1 + 8) = rax_11
        int64_t r9_2 = *rax_9
        (*(r9_2 + 0x150))(rax_9, rax_11, r8_1, r9_2, var_128)
        (**rax_9)(rax_9, 1)
    
    int64_t* rcx_13 = *(arg1 + 0x28)
    (*(*rcx_13 + 0x10))(rcx_13)
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_f8)
    rcx = *(arg1 + 0x28)

if ((*(*rcx + 0x20))(rcx, 0, 0) == 0)
    if (*(arg1 + 0x20) != 0)
        rbp = *(arg1 + 0x18)
    
    void var_d8
    sub_1408f2b40(&var_d8, rbp)
    int64_t var_50
    sub_140b4b300("PreLoadFile %s wasn't ready...\n", var_50)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t* rcx_17 = *(arg1 + 0x28)
    (*(*rcx_17 + 0x20))(rcx_17, 0xffffffff, 0)

sub_140a4fc50(*(arg1 + 0x28))
*(arg1 + 0x28) = 0

if (arg2 != 0)
    *arg2 = *(arg1 + 0x10)

int64_t result = *(arg1 + 8)
*(arg1 + 8) = 0
sub_140b3cf90()
EnterCriticalSection(&data_143de7a80)
sub_1408f2170(&data_143de7aa8, arg1 + 0x18)
LeaveCriticalSection(&data_143de7a80)
__security_check_cookie(rax_1 ^ &var_148)
return result

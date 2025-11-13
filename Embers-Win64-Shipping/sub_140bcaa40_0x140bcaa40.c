// 函数: sub_140bcaa40
// 地址: 0x140bcaa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x1a) & 1) == 0 && arg1[1].d == 0xffffffff)
    return 

int128_t var_88
int64_t var_68
int64_t var_48
int64_t var_38

if (Concurrency::details::are_vista_sync_apis_available() == 0)
    int64_t rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_140bc7f20(arg1)
    sub_140bc8400(&var_48, arg1[1].d)
    int16_t* const r12_1 = &data_142d40450
    int64_t r13_1 = var_48
    int16_t* var_40
    char rax_2
    char rax_3
    
    if ((not.b(arg1[3].b) & 1) != 0)
        rax_2 = sub_140a237d0(&var_40, u".uasset", 1)
        
        if (rax_2 == 0)
            rax_3 = sub_140a237d0(&var_40, u".umap", 1)
    
    int32_t rsi_1
    int16_t* rdi_1
    
    if ((not.b(arg1[3].b) & 1) == 0 || (rax_2 == 0 && rax_3 == 0))
        int32_t rcx_11 = arg1[3].d
        
        if (((rcx_11 u>> 0xb).b & 1) != 0)
            sub_140b0f020(&var_88, &var_40, &data_143e1a878)
        else if (((rcx_11 u>> 8).b & 1) != 0)
            int64_t* r8_3
            
            if ((not.b(rcx_11.b) & 1) == 0)
                r8_3 = &data_143e1a868
                
                if (((rcx_11 u>> 0xc).b & 1) == 0)
                    r8_3 = &data_143e1a858
            else
                r8_3 = &data_143e1a848
            
            sub_140b0f020(&var_88, &var_40, r8_3)
        else
            int32_t rdi_2 = var_38.d
            int16_t* rsi_2 = var_40
            var_88.q = 0
            var_88:8.d = rdi_2
            
            if (rdi_2 != 0)
                sub_1405a4c70(&var_88, rdi_2, 0)
                memcpy(var_88.q, rsi_2, rdi_2 * 2)
        
        rdi_1 = var_88.q
        rsi_1 = var_88:8.d
    else
        sub_140a464c0()
        int16_t* const rdx_1 = &data_142d40450
        
        if (var_38.d != 0)
            rdx_1 = var_40
        
        char const (* r8_1)[0x4] = data_14399ea08
        r13_1 -= (*(r8_1 + 0x108))(&data_14399ea08, rdx_1, r8_1)
        int64_t* rax_5
        rax_5, zmm1_1 = sub_140b18720(&var_68, &var_40, 0)
        int64_t rcx_6 = *rax_5
        int32_t rdx_3 = rax_5[1].d
        int32_t rdx_4 = neg.d(rdx_3)
        *rax_5 = 0
        int32_t r8_2 = rax_5[1].d
        var_88.q = rcx_6
        int32_t rcx_7 = *(rax_5 + 0xc)
        int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 6 + r8_2
        var_88:8.d = r8_2
        var_88:0xc.d = rcx_7
        rax_5[1] = 0
        
        if (rdx_7 s> rcx_7)
            sub_1405947f0(&var_88, rdx_7)
        
        sub_140a20ba0(&var_88, u".uexp", 5)
        int64_t rcx_10 = var_68
        rdi_1 = var_88.q
        rsi_1 = var_88:8.d
        
        if (rcx_10 != 0)
            zmm1_1 = sub_140a74f90(rcx_10)
    
    sub_140a464c0()
    
    if (rsi_1 != 0)
        r12_1 = rdi_1
    
    char const (* r9_1)[0x4] = data_14399ea08
    int64_t* rax_11 = (*(r9_1 + 0x18))(&data_14399ea08, r12_1, 2, r9_1)
    int64_t r8_6 = *rax_11
    (*(r8_6 + 0x178))(rax_11, r13_1, r8_6)
    int128_t* rax_12 = *arg2
    
    if (rax_12 == 0)
        rax_12 = sub_140a82f30(rax_1, 0)
        *arg2 = rax_12
    
    sub_140bd0550(arg1, rax_11, rax_12, rax_1, zmm1_1)
    (**rax_11)(rax_11, 1)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    int16_t* rcx_21 = var_40
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
else if ((*(arg1 + 0x1a) & 1) != 0)
    int64_t rax_15 = *arg2
    
    if (rax_15 == 0)
        rax_15 = sub_140a82f30(sub_140bc7f20(arg1), 0)
        *arg2 = rax_15
    
    void* rcx_24 = data_143e1a8d8
    int64_t var_60_1 = -1
    var_68 = 0
    int32_t var_50_1 = 0
    sub_140ab5640(rcx_24, &var_48)
    var_88 = var_68.o
    int128_t var_78_1 = rax_15.o
    void* arg_8
    sub_140ab9960(&var_48, &arg_8, arg1, &var_88)
    sub_140ab4030(&var_48)
    sub_140ac8910(&var_48)
    var_68.o = var_48.o
    int64_t var_58_2 = var_38
    sub_140aadd30(data_143e1a8d8, &var_68)

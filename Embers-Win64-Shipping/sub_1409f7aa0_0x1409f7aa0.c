// 函数: sub_1409f7aa0
// 地址: 0x1409f7aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_118
int64_t rax_2 = __security_cookie ^ &var_118
int64_t* rcx = *arg1

if ((*(*rcx + 0x38))(rcx) == 0)
    int64_t var_c8
    _vfprintf_p_l(&var_c8, u"An unknown error ocurred", u"MobilePatchingUtils")
    int64_t* rcx_19 = *(arg2 + 0x68)
    int64_t* var_c0
    int32_t var_b8
    
    if (rcx_19 != 0)
        void var_78
        int64_t* rax_22 = (*(*rcx_19 + 0xa8))(rcx_19, &var_78)
        int64_t rdx_10 = var_c8
        var_c8 = *rax_22
        *rax_22 = rdx_10
        int64_t* rdx_11 = var_c0
        var_c0 = rax_22[1]
        rax_22[1] = rdx_11
        var_b8 = rax_22[2].d
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t rax_26 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        int64_t* rcx_24 = *(arg2 + 0x68)
        (*(*rcx_24 + 0x48))(rcx_24)
    
    int64_t var_90 = var_c8
    int64_t* var_88_1 = var_c0
    
    if (var_c0 != 0)
        var_c0[1].d += 1
    
    int32_t var_80_1 = var_b8
    sub_1409f6790(arg4, &var_90)
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t rax_32 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
else
    int64_t* rax_5 = sub_1409f6b00()
    int16_t* var_b0
    sub_140b18970(&var_b0, arg2 + 0x48)
    int32_t var_a8
    int32_t rdi_2
    
    if (var_a8 == 0)
        rdi_2 = 0
    else
        rdi_2 = var_a8 - 1
    
    int32_t rbx_1 = *(arg2 + 0x30)
    int32_t rax_7
    
    if (rbx_1 == 0)
        rax_7 = rbx_1 + 2
    
    if (rbx_1 != 0 || rdi_2 == 0xffffffff)
        rax_7 = 1
    
    int64_t r15_2 = *(arg2 + 0x28)
    int32_t rcx_2 = rax_7 + rdi_2
    int64_t var_e8 = 0
    int32_t var_e0_1 = rbx_1
    
    if (rbx_1 != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_e8, rbx_1 + rcx_2, 0)
        memcpy(var_e8, r15_2, rbx_1 * 2)
    else
        int32_t var_dc_1 = 0
    
    sub_140a2cf70(&var_e8, var_b0, rdi_2)
    int64_t var_a0 = *(arg2 + 0x78)
    void* rax_9 = *(arg2 + 0x80)
    void* var_98_1 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    (*(*rax_5 + 0x68))(rax_5, &var_e8, &var_a0)
    int64_t* rcx_7 = *(arg2 + 0x80)
    int64_t var_f8 = *(arg2 + 0x78)
    int64_t* var_f0_1 = rcx_7
    
    if (rcx_7 != 0)
        rcx_7[1].d += 1
        rcx_7 = var_f0_1
    
    if (&var_f8 != arg2 + 0x38)
        int128_t zmm1_1 = var_f8.o
        int128_t var_60_1 = zmm1_1
        var_f8.o = *(arg2 + 0x38)
        rcx_7 = var_f0_1
        *(arg2 + 0x38) = zmm1_1
    
    if (rcx_7 != 0)
        rcx_7[1].d -= 1
        
        if (rcx_7[1].d == 1)
            (**var_f0_1)(var_f0_1)
            int32_t rax_14 = *(var_f0_1 + 0xc)
            *(var_f0_1 + 0xc) -= 1
            
            if (rax_14 == 1)
                (*(*var_f0_1 + 8))(var_f0_1, 1)
    
    int32_t rcx_10
    rcx_10.b = sub_140b5b8a0(arg3[2], 0) == 0
    
    if ((arg3[3] != 0 | rcx_10.b) != 0)
        void* rax_17 = sub_140d3c6e0(arg3)
        
        if (rax_17 != 0 && sub_140d1fd20(rax_17, *(arg3 + 8)) != 0)
            int64_t* rax_19 = sub_140d3c6e0(arg3)
            int64_t rax_20 = sub_140d1fd30(rax_19, *(arg3 + 8))
            int64_t r9 = *rax_19
            (*(r9 + 0x210))(rax_19, rax_20, 0, r9)
    
    int64_t rcx_16 = var_e8
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int16_t* rcx_17 = var_b0
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

int64_t* var_d0 = nullptr
int64_t var_d8

if (arg2 + 0x68 != &var_d8)
    *(arg2 + 0x68) = 0
    var_d8 = 0
    sub_1405aeff0(arg2 + 0x70, &var_d0)
    int64_t* rcx_30 = var_d0
    
    if (rcx_30 != 0)
        rcx_30[1].d -= 1
        
        if (rcx_30[1].d == 1)
            int64_t* rbx_7 = var_d0
            (**rbx_7)(rbx_7)
            int32_t rdi_3 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (rdi_3 == 1)
                int64_t* rcx_32 = var_d0
                (*(*rcx_32 + 8))(rcx_32, zx.q(rdi_3))

__security_check_cookie(rax_2 ^ &var_118)

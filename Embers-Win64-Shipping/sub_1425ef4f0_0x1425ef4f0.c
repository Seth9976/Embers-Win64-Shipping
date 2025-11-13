// 函数: sub_1425ef4f0
// 地址: 0x1425ef4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d78
int64_t rax_1 = __security_cookie ^ &var_d78
uint64_t rbx = -1
int32_t rdi = arg3
int16_t* const r12 = &data_142d40450

if (*(arg2 + 0x50) == 0)
    int16_t* var_cc8
    sub_140a2e390(&var_cc8, u"PixelStreamingCopy_%d", zx.q(*arg2))
    int16_t* const rdx = &data_142d40450
    int32_t var_cc0
    
    if (var_cc0 != 0)
        rdx = var_cc8
    
    void var_cdc
    sub_140b58260(&var_cdc, rdx, 1)
    int64_t* rcx_2 = data_143f0f180
    int64_t var_d10
    (*(*rcx_2 + 0xa0))(rcx_2, &var_d10, &var_cdc)
    
    if (&arg2[0x14] != &var_d10)
        int64_t* rdi_1 = *(arg2 + 0x50)
        *(arg2 + 0x50) = var_d10
        var_d10 = 0
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                char rax_5
                
                if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_5 = sub_1405949a0()
                
                if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_5 != 0))
                    (**rdi_1)(rdi_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rdi_1 + 0xc))
                        *(rdi_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rdi_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_7 = sub_140a20af0()
                        uint64_t rdx_2 = zx.q(rax_7)
                        void* const rax_8
                        
                        if (rax_7 != 0)
                            rax_8 = *(&data_143cf0bf8 + (rdx_2 u>> 0xe << 3))
                                + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                        else
                            rax_8 = nullptr
                        
                        *(rax_8 + 8) = rdi_1
                        sub_1405a42f0(&data_143f02390, rdx_2.d)
        
        rdi = arg3
    
    sub_14081c9d0(&var_d10)
    int16_t* rcx_8 = var_cc8
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

int128_t zmm1 = data_143dbb1e0
int128_t var_98
int128_t* var_d30 = &var_98
int64_t* rcx_10 = data_143f0f180
int32_t var_d38 = 0x1000001
int32_t var_d40 = 1
int32_t var_d48 = 1
int32_t var_74 = (1 << (data_1439c7a34).b) - 1
int32_t var_88 = 1
int64_t var_68 = 0
int32_t var_60 = 0
var_98 = zx.o(0)
int128_t var_84 = zmm1
char var_70 = 0
void var_cf0
(*(*rcx_10 + 0x560))(rcx_10, &var_cf0, &data_143f02b98, zx.q(rdi), arg4, 2, var_d48, var_d40, 
    var_d38, var_d30, arg3)
sub_1405d1600(&arg2[0xa], &var_cf0)
sub_1405d1550(&var_cf0)
int64_t* rcx_13 = data_143f0f180
int16_t* rax_17 = (*(*rcx_13 + 0x20))(rcx_13)
int16_t* rsi_1 = nullptr
int32_t rdi_2 = 0
int16_t* var_d20 = nullptr
int32_t rax_18 = 0
int64_t var_d18 = 0
int16_t* const rcx_17

if (rax_17 != 0 && *rax_17 != 0)
    do
        rbx += 1
    while (rax_17[rbx] != 0)
    
    rbx = zx.q(rbx.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_d20, rbx.d)
        rax_18 = var_d18:4.d
        rdi_2 = var_d18.d
        rsi_1 = var_d20
    
    rdi_2 += rbx.d
    var_d18.d = rdi_2
    
    if (rdi_2 s> rax_18)
        sub_140594770(&var_d20)
        rdi_2 = var_d18.d
        rsi_1 = var_d20
    
    UnDecorator::getReferenceType(rsi_1, rax_17, rbx.d * 2)
    rcx_17 = rsi_1

if (rax_17 == 0 || *rax_17 == 0 || rdi_2 == 0)
    rcx_17 = &data_142d40450

int64_t* rcx_23
int64_t* rcx_42

if (sub_140a54510(rcx_17, u"D3D11") != 0)
    int16_t* rcx_31 = &data_142d40450
    
    if (rdi_2 != 0)
        rcx_31 = rsi_1
    
    if (sub_140a54510(rcx_31, u"D3D12") != 0)
        goto label_1425ef849
    
    int64_t* rcx_32 = data_143f0f180
    int64_t* rax_40 = (*(*rcx_32 + 0x458))(rcx_32)
    int64_t* rcx_33 = *(arg2 + 0x28)
    int64_t rdx_13 = *rcx_33
    int64_t* rax_41 = (*(rdx_13 + 8))(rcx_33, rdx_13)
    int64_t rdx_14 = *rax_41
    int64_t rax_42 = (*(rdx_14 + 0x38))(rax_41, rdx_14)
    uint64_t r8_5 = zx.q(data_143f70b88)
    data_143f70b88 = (r8_5 + 1).d
    int16_t* var_cb8
    sub_140a2e390(&var_cb8, u"PixelStreaming_NvEnc_%u", r8_5)
    int32_t var_cb0
    
    if (var_cb0 != 0)
        r12 = var_cb8
    
    char var_d50
    HANDLE hObject
    var_d50.q = &hObject
    int32_t var_d58
    var_d58.q = r12
    int32_t rax_43 = (*(*rax_40 + 0xf8))(rax_40, rax_42, 0, 0x10000000, var_d58, var_d50)
    int16_t* rcx_38 = var_cb8
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    if (rax_43 s>= 0)
        int64_t* rax_44 = *(arg1 + 0x17a8)
        int64_t* var_d00 = nullptr
        int64_t* rcx_39 = *rax_44
        int32_t rax_46 = (**rcx_39)(rcx_39, &data_14344a6a8, &var_d00)
        int32_t rax_48
        
        if (rax_46 s>= 0)
            int64_t* rcx_40 = var_d00
            rax_48 = (*(*rcx_40 + 0x180))(rcx_40, hObject, &data_142d5b568, &arg2[0xc])
        
        if (rax_46 s< 0 || rax_48 s< 0)
            rcx_42 = var_d00
            goto label_1425efa3c
        
        CloseHandle(hObject)
        rcx_23 = var_d00
        goto label_1425ef836
    
    rbx.b = 0
else
    int64_t* rcx_18 = *(arg2 + 0x28)
    int64_t* rax_21 = (*(*rcx_18 + 8))(rcx_18)
    int64_t rdx_8 = *rax_21
    int64_t* rax_22 = (*(rdx_8 + 0x38))(rax_21, rdx_8)
    int64_t* var_d08 = nullptr
    int64_t r9_1 = *rax_22
    
    if ((*r9_1)(rax_22, &data_142d5fd38, &var_d08, r9_1) s< 0)
    label_1425ef91b:
        rcx_42 = var_d08
    label_1425efa3c:
        
        if (rcx_42 != 0)
            (*(*rcx_42 + 0x10))(rcx_42)
        
        rbx.b = 0
    else
        int64_t* rcx_21 = var_d08
        int64_t var_cd0
        
        if ((*(*rcx_21 + 0x40))(rcx_21, &var_cd0) s< 0)
            goto label_1425ef91b
        
        int64_t* rcx_22 = **(arg1 + 0x17a8)
        
        if ((*(*rcx_22 + 0xe0))(rcx_22, var_cd0, &data_142d5b568, &arg2[0xc]) s< 0)
            goto label_1425ef91b
        
        rcx_23 = var_d08
    label_1425ef836:
        
        if (rcx_23 == 0)
            goto label_1425ef849
        
        (*(*rcx_23 + 0x10))(rcx_23)
    label_1425ef849:
        int64_t var_c98_1 = 0
        uint64_t var_c88_1 = 0
        void var_c7c
        memset(&var_c7c, 0, 0x5d4)
        int64_t rcx_25 = *(arg1 + 0x58)
        int64_t var_c90_1 = *(arg2 + 0x30)
        int32_t var_ca0_1 = arg3
        int32_t var_c9c_1 = arg4
        int64_t rax_33 = *(arg1 + 0x50)
        int64_t var_ca8 = 0x71030008
        int32_t var_c80_1 = 0x10000000
        (*(rax_33 + 0xf8))(rcx_25, &var_ca8)
        *(arg2 + 0x10) = var_c88_1
        arg2[8] = var_c80_1
        int32_t var_6a8
        memset(&var_6a8, 0, 0x608)
        int64_t rax_35 = *(arg1 + 0x50)
        int64_t rcx_27 = *(arg1 + 0x58)
        var_6a8 = 0x71040008
        uint64_t var_698_1 = var_c88_1
        (*(rax_35 + 0xd0))(rcx_27, &var_6a8)
        rbx.b = 1
        int64_t var_690
        *(arg2 + 0x18) = var_690

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

__security_check_cookie(rax_1 ^ &var_d78)
return zx.q(rbx.b)

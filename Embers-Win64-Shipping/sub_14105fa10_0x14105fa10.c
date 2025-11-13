// 函数: sub_14105fa10
// 地址: 0x14105fa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_668
int64_t rax_1 = __security_cookie ^ &var_668
void var_60
sub_141060ac0(&var_60, *(arg3 + 0x2d0))
int64_t* r14 = *(arg2 + 0x28)
HRESULT result
struct ID3DBlob ppDisassembly_8
int32_t var_618
int64_t pSrcData_8
uint64_t SrcDataSize_5

if (r14 == 0 || arg4 == 0)
    sub_141062a60(arg3 + 8, &var_618)
    int64_t* rdi_2 = *(arg3 + 0x300)
    int64_t* r15_1 = *(arg2 + 0x18)
    HRESULT result_1 = 0
    int64_t* var_648
    
    if (rdi_2 != 0)
        var_648 = arg1
        result = (*(*rdi_2 + 0x48))(rdi_2, &var_60, &var_618, &data_142f03b10, var_648)
    
    if (rdi_2 == 0 || result == E_INVALIDARG)
        result = (*(*r15_1 + 0x50))(r15_1, &var_618, &data_142f03b10, arg1, var_648)
        result_1 = result
    
    if (rdi_2 == 0)
        goto label_14105ffc1
    
    if (result_1 s< 0)
    label_14105ffca:
        int32_t var_610
        int64_t pSrcData_4 = var_610.q
        
        if (pSrcData_4 != 0)
            struct ID3DBlob* ppDisassembly_4 = &ppDisassembly_8
            ppDisassembly_8 = 0
            uint64_t SrcDataSize
            result = D3DDisassemble(pSrcData_4, SrcDataSize, 0, &data_1437020ab, ppDisassembly_4)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_13 = ppDisassembly_8
                result = (*(*ppDisassembly_13 + 0x10))(ppDisassembly_13)
        
        int128_t var_5d0
        int64_t pSrcData_5 = var_5d0.q
        
        if (pSrcData_5 != 0)
            struct ID3DBlob* ppDisassembly_5 = &ppDisassembly_8
            ppDisassembly_8 = 0
            result = D3DDisassemble(pSrcData_5, var_5d0:8.q, 0, &data_1437020ab, ppDisassembly_5)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_14 = ppDisassembly_8
                result = (*(*ppDisassembly_14 + 0x10))(ppDisassembly_14)
        
        int32_t var_5e0
        int64_t pSrcData_6 = var_5e0.q
        
        if (pSrcData_6 != 0)
            struct ID3DBlob* ppDisassembly_6 = &ppDisassembly_8
            ppDisassembly_8 = 0
            int32_t var_5d8
            result = D3DDisassemble(pSrcData_6, var_5d8.q, 0, &data_1437020ab, ppDisassembly_6)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_15 = ppDisassembly_8
                result = (*(*ppDisassembly_15 + 0x10))(ppDisassembly_15)
        
        int128_t var_5f8
        int64_t pSrcData_7 = var_5f8:8.q
        
        if (pSrcData_7 != 0)
            struct ID3DBlob* ppDisassembly_7 = &ppDisassembly_8
            ppDisassembly_8 = 0
            int32_t var_5e8
            result = D3DDisassemble(pSrcData_7, var_5e8.q, 0, &data_1437020ab, ppDisassembly_7)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_16 = ppDisassembly_8
                result = (*(*ppDisassembly_16 + 0x10))(ppDisassembly_16)
        
        int32_t var_600
        pSrcData_8 = var_600.q
        
        if (pSrcData_8 != 0)
            SrcDataSize_5 = var_5f8.q
        label_1410600c9:
            ppDisassembly_8 = 0
            result = D3DDisassemble(pSrcData_8, SrcDataSize_5, 0, &data_1437020ab, &ppDisassembly_8)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_17 = ppDisassembly_8
                result = (*(*ppDisassembly_17 + 0x10))(ppDisassembly_17)
    else
        int64_t r9_3 = *rdi_2
        result = (*(r9_3 + 0x40))(rdi_2, &var_60, *arg1, r9_3, var_648)
    label_14105ffc1:
        
        if (result_1 s< 0)
            goto label_14105ffca
else
    uint128_t zmm0 = *(arg3 + 0x210)
    int64_t i_2 = 5
    uint128_t zmm1 = *(arg3 + 0x50)
    var_618 = 0x12
    int64_t var_394
    __builtin_memset(&var_394, 0, 0x24)
    void var_55c
    void* rcx_1 = &var_55c
    int64_t i_3 = 2
    int64_t var_36c_1 = 0
    int64_t var_350_1 = 0
    int64_t var_348_1 = 0
    int32_t var_614_1 = *(arg3 + 0x258)
    uint128_t var_5f8_1 = zmm0
    int64_t var_608 = *(arg3 + 8)
    int32_t var_5e4_1 = *(arg3 + 0x220)
    uint128_t var_5d0_1 = *(arg3 + 0x10)
    int32_t var_5dc_1 = *(arg3 + 0x224)
    void* rax_6 = arg3 + 0x60
    int32_t var_610_1 = 0
    uint128_t var_5b8_1 = zmm1
    int32_t var_600_1 = 0xc
    int32_t var_5e8_1 = 0xd
    uint128_t var_5a0_1 = *(arg3 + 0x40)
    int32_t var_5e0_1 = 0xe
    int32_t var_5d8_1 = 1
    int32_t var_5c0_1 = 5
    uint128_t var_570_1 = *(arg3 + 0x20)
    int32_t var_5a8_1 = 4
    int32_t var_590_1 = 3
    int32_t var_578_1 = 2
    int32_t var_560_1 = 8
    int32_t var_410_1 = 0x15
    int32_t var_3d0_1 = 0x10
    int32_t var_3c8_1 = 0xa
    int32_t var_398_1 = 0xf
    int32_t var_370_1 = 0x11
    int32_t var_360_1 = 9
    int32_t var_358_1 = 0x13
    uint128_t var_588_1 = *(arg3 + 0x30)
    int64_t i
    
    do
        rcx_1 += 0x80
        zmm0 = *rax_6
        zmm1 = *(rax_6 + 0x10)
        rax_6 += 0x80
        *(rcx_1 - 0x80) = zmm0
        zmm0 = *(rax_6 - 0x60)
        *(rcx_1 - 0x70) = zmm1
        zmm1 = *(rax_6 - 0x50)
        *(rcx_1 - 0x60) = zmm0
        zmm0 = *(rax_6 - 0x40)
        *(rcx_1 - 0x50) = zmm1
        zmm1 = *(rax_6 - 0x30)
        *(rcx_1 - 0x40) = zmm0
        zmm0 = *(rax_6 - 0x20)
        *(rcx_1 - 0x30) = zmm1
        zmm1 = *(rax_6 - 0x10)
        *(rcx_1 - 0x20) = zmm0
        *(rcx_1 - 0x10) = zmm1
        i = i_3
        i_3 -= 1
    while (i != 1)
    zmm1 = *(rax_6 + 0x10)
    *rcx_1 = *rax_6
    zmm0 = *(rax_6 + 0x20)
    *(rcx_1 + 0x10) = zmm1
    zmm1 = *(rax_6 + 0x30)
    int64_t rax_7 = *(rax_6 + 0x40)
    *(rcx_1 + 0x20) = zmm0
    zmm0 = *(arg3 + 0x1d8)
    *(rcx_1 + 0x30) = zmm1
    *(rcx_1 + 0x40) = rax_7
    void var_338
    uint128_t* rcx_2 = &var_338
    int32_t var_3cc_1 = *(arg3 + 0x24c)
    uint128_t var_40c_1 = zmm0
    int32_t var_39c_1 = *(arg3 + 0x1d4)
    uint128_t var_3fc_1 = *(arg3 + 0x1e8)
    int32_t var_374_1 = *(arg3 + 0x248)
    uint128_t var_3ec_1 = *(arg3 + 0x1f8)
    int64_t var_36c_2 = *(arg3 + 0x250)
    uint64_t var_3dc_1 = *(arg3 + 0x208)
    int32_t var_35c_1 = *(arg3 + 0x1a8)
    int32_t* rax_13 = &var_618
    uint128_t var_3c4_1 = *(arg3 + 0x1ac)
    uint64_t var_3a4_1 = *(arg3 + 0x1cc)
    uint128_t var_3b4_1 = *(arg3 + 0x1bc)
    var_394.o = *(arg3 + 0x228)
    int64_t var_384
    var_384.o = *(arg3 + 0x238)
    var_350_1.o = *(arg3 + 0x260)
    int64_t i_1
    
    do
        rcx_2 = &rcx_2[8]
        zmm0 = *rax_13
        zmm1 = *(rax_13 + 0x10)
        rax_13 = &rax_13[0x20]
        rcx_2[-8] = zmm0
        zmm0 = *(rax_13 - 0x60)
        rcx_2[-7] = zmm1
        zmm1 = *(rax_13 - 0x50)
        rcx_2[-6] = zmm0
        zmm0 = *(rax_13 - 0x40)
        rcx_2[-5] = zmm1
        zmm1 = *(rax_13 - 0x30)
        rcx_2[-4] = zmm0
        zmm0 = *(rax_13 - 0x20)
        rcx_2[-3] = zmm1
        zmm1 = *(rax_13 - 0x10)
        rcx_2[-2] = zmm0
        rcx_2[-1] = zmm1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    zmm0 = *rax_13
    int64_t* rdi_1 = *(arg3 + 0x300)
    int64_t var_630 = 0x2d8
    zmm1 = *(rax_13 + 0x10)
    *rcx_2 = zmm0
    zmm0 = *(rax_13 + 0x20)
    rcx_2[1] = zmm1
    zmm1 = *(rax_13 + 0x30)
    rcx_2[2] = zmm0
    zmm0 = *(rax_13 + 0x40)
    int64_t rax_14 = *(rax_13 + 0x50)
    rcx_2[3] = zmm1
    rcx_2[4] = zmm0
    rcx_2[5].q = rax_14
    void* var_628_1 = &var_338
    
    if (rdi_1 == 0)
        result = (*(*r14 + 0x178))(r14, &var_630, &data_142f03b10, arg1)
    else
        result = (*(*rdi_1 + 0x68))(rdi_1, &var_60, &var_630, &data_142f03b10, arg1)
        
        if (result == E_INVALIDARG)
            result = (*(*r14 + 0x178))(r14, &var_630, &data_142f03b10, arg1)
            
            if (result s< 0)
                goto label_14105fe2b
            
            result = (*(*rdi_1 + 0x40))(rdi_1, &var_60, *arg1)
    
    if (result s< 0)
    label_14105fe2b:
        int64_t pSrcData
        
        if (pSrcData != 0)
            struct ID3DBlob* ppDisassembly = &ppDisassembly_8
            ppDisassembly_8 = 0
            uint64_t SrcDataSize_1
            result = D3DDisassemble(pSrcData, SrcDataSize_1, 0, &data_1437020ab, ppDisassembly)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_9 = ppDisassembly_8
                result = (*(*ppDisassembly_9 + 0x10))(ppDisassembly_9)
        
        int64_t pSrcData_1
        
        if (pSrcData_1 != 0)
            struct ID3DBlob* ppDisassembly_1 = &ppDisassembly_8
            ppDisassembly_8 = 0
            uint64_t SrcDataSize_2
            result = D3DDisassemble(pSrcData_1, SrcDataSize_2, 0, &data_1437020ab, ppDisassembly_1)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_10 = ppDisassembly_8
                result = (*(*ppDisassembly_10 + 0x10))(ppDisassembly_10)
        
        int64_t pSrcData_2
        
        if (pSrcData_2 != 0)
            struct ID3DBlob* ppDisassembly_2 = &ppDisassembly_8
            ppDisassembly_8 = 0
            uint64_t SrcDataSize_3
            result = D3DDisassemble(pSrcData_2, SrcDataSize_3, 0, &data_1437020ab, ppDisassembly_2)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_11 = ppDisassembly_8
                result = (*(*ppDisassembly_11 + 0x10))(ppDisassembly_11)
        
        int64_t pSrcData_3
        
        if (pSrcData_3 != 0)
            struct ID3DBlob* ppDisassembly_3 = &ppDisassembly_8
            ppDisassembly_8 = 0
            uint64_t SrcDataSize_4
            result = D3DDisassemble(pSrcData_3, SrcDataSize_4, 0, &data_1437020ab, ppDisassembly_3)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_12 = ppDisassembly_8
                result = (*(*ppDisassembly_12 + 0x10))(ppDisassembly_12)
        
        int64_t pSrcData_9
        pSrcData_8 = pSrcData_9
        
        if (pSrcData_8 != 0)
            uint64_t SrcDataSize_6
            SrcDataSize_5 = SrcDataSize_6
            goto label_1410600c9
__security_check_cookie(rax_1 ^ &var_668)
return result

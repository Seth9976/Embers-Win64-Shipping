// 函数: sub_142151d40
// 地址: 0x142151d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x28]
wchar16* rdx_6

if (rcx != 0)
    int128_t var_d8 = zx.o(0)
    int64_t var_c8
    arg3, arg4 = sub_141cce190(rcx, &var_c8, arg2, zx.q(arg3.d), 0, &var_d8)
    int64_t* rdi_1 = var_d8:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            arg3 = (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                arg3 = (*(*rdi_1 + 8))(rdi_1, 1)
    
    char var_bc
    uint64_t result
    
    if (var_bc != 0)
        rdx_6 = u"Packet failed PacketHandler processing."
    label_142151f2c:
        sub_140a2e390(&var_d8, rdx_6, arg3)
        result = sub_14213f9e0(arg1)
        int64_t rcx_16 = var_d8.q
        
        if (rcx_16 != 0)
            return sub_140a74f90(rcx_16)
    else
        int32_t var_c0
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(var_c0 + 7)
        result = zx.q((temp3_1 + (temp2_1 & 7)) s>> 3)
        arg3 = zx.q(result.d)
        
        if (result.d s> 0)
            result = arg1[0x28]
            arg2 = var_c8
            
            if (*(result + 0x21c) == 2)
                goto label_142151e01
    
    return result

label_142151e01:
int32_t rcx_3 = arg1[0x31].d
*(arg1 + 0x4b4) += 1
int32_t rcx_4 = rcx_3 + arg3.d
*(arg1 + 0x4a4) += rcx_4
*(arg1 + 0x4ac) += rcx_4
*(arg1 + 0x4bc) += 1
void* rax_7 = arg1[0xb]

if (rax_7 != 0)
    *(rax_7 + 0x238) += rcx_4
    void* rax_8 = arg1[0xb]
    *(rax_8 + 0x23c) += rcx_4
    void* rax_9 = arg1[0xb]
    *(rax_9 + 0x250) += 1
    void* rax_10 = arg1[0xb]
    *(rax_10 + 0x254) += 1

if (arg3.d s<= 0)
    rdx_6 = u"Received zero-size packet"
else
    char rcx_5 = *(sx.q(arg3.d) + arg2 - 1)
    
    if (rcx_5 != 0)
        int32_t rax_12 = ((arg3 << 3) + -ffffffffffffffff).d
        
        if (rcx_5 s>= 0)
            char temp5_1
            char temp6_1
            
            do
                rax_12 -= 1
                temp5_1 = rcx_5
                temp6_1 = rcx_5
                rcx_5 *= 2
            while (temp5_1 + temp6_1 s>= 0)
        
        void** var_b8
        uint128_t zmm0 = sub_140b4c3a0(&var_b8, arg2, sx.q(rax_12))
        var_b8[0x1f](&var_b8, zx.q(arg1[0x26b].d))
        var_b8[0x20](&var_b8, zx.q(*(arg1 + 0x135c)))
        arg1[0x28]
        int64_t var_18
        int64_t var_10
        
        if (var_18 - var_10 s> 0)
            uint128_t zmm0_1
            int512_t zmm1
            uint128_t zmm2
            zmm0_1, zmm1, zmm2 = sub_1421500c0(arg1, &var_b8, 0, zmm0, arg4, arg5)
            sub_1421478c0(arg1, 0, zmm2, zmm0_1, zmm1)
        
        int64_t var_28
        
        if (var_28 != 0)
            sub_140a74f90(var_28)
        
        return sub_140b4cb40(&var_b8)
    
    rdx_6 = u"Received packet with 0's in last byte of packet"

goto label_142151f2c

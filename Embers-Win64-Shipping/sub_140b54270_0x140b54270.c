// 函数: sub_140b54270
// 地址: 0x140b54270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char result = arg1[5].b
int64_t rbx = arg4
int64_t rsi = arg3
int64_t var_90 = arg3
int128_t* r12 = arg2
int128_t var_80
uint64_t i_3

if ((result & 1) != 0)
    sub_140b5b8a0(rbx.d, 0x101)
    int64_t* rcx_1 = arg1[1]
    var_80 = zx.o(0)
    int64_t* rdx = *rcx_1
    
    if (&rdx[1] u> rcx_1[1])
        arg4 = sub_140b4b460(arg1, &var_80, arg5)
    else
        var_80.q = *rdx
        *rcx_1 += 8
    
    int64_t* rcx_3 = arg1[1]
    int64_t* rdx_2 = *rcx_3
    
    if (&rdx_2[1] u> rcx_3[1])
        arg4 = sub_140b4b460(arg1, &var_80:8, arg5)
    else
        var_80:8.q = *rdx_2
        *rcx_3 += 8
    
    int64_t* rcx_5 = arg1[1]
    rsi.b = var_80.q != 0x9e2a83c1
    int64_t* rdx_4 = *rcx_5
    char var_b8_1 = rsi.b
    
    if (&rdx_4[1] u> rcx_5[1])
        arg4 = sub_140b4b460(arg1, &i_3, arg5)
    else
        i_3 = *rdx_4
        *rcx_5 += 8
    
    int64_t* rcx_8 = arg1[1]
    int64_t* rdx_6 = *rcx_8
    uint64_t var_68
    
    if (&rdx_6[1] u> rcx_8[1])
        rcx_8, arg4 = sub_140b4b460(arg1, &var_68, arg5)
    else
        var_68 = *rdx_6
        *rcx_8 += 8
    
    if (rsi.b == 0)
        rcx_8.b = var_80.q == 0x9e2a83c1
    else
        int64_t temp4_1 = var_80.q
        rcx_8.b = temp4_1 == 0xc1832a9e
        
        if (temp4_1 == 0xc1832a9e)
            i_3 = _bswap(i_3)
            var_68 = _bswap(var_68)
            var_80:8.q = _bswap(var_80:8.q)
    
    if (rcx_8.b == 0)
        arg5 = sub_140af98a0("Unknown", 0x29e, 
            BulkData compressed header read error. This package may be corrupt!", arg4)
        sub_140afbb40()
    
    int64_t rcx_9 = var_80:8.q
    
    if (rcx_9 == 0x9e2a83c1)
        rcx_9 = 0x20000
    
    int64_t i_4 = divs.dp.q(sx.o(var_68 - 1 + rcx_9), rcx_9)
    int64_t rax_21 = 0x10 * i_4
    
    if (mulu.dp.q(0x10, i_4) u>> 0x40 != zx.o(0))
        rax_21 = -1
    
    int64_t* rax_22 = j_sub_140a82f30(rax_21)
    int64_t* rsi_1 = rax_22
    uint64_t r15_1 = 0
    
    if (i_4 s> 0)
        int64_t rcx_11 = 0
        int32_t r12_1 = 0
        
        do
            sub_140b4cda0(arg1, &rax_22[rcx_11 * 2], arg5)
            uint64_t rcx_14 = *rsi_1
            
            if (var_b8_1 != 0)
                uint64_t rax_24 = _bswap(rsi_1[1])
                rcx_14 = _bswap(rcx_14)
                rsi_1[1] = rax_24
                *rsi_1 = rcx_14
            
            if (rcx_14 s>= r15_1)
                r15_1 = rcx_14
            
            r12_1 += 1
            rcx_11 = sx.q(r12_1)
            rsi_1 = &rsi_1[2]
        while (rcx_11 s< i_4)
        
        r12 = arg2
        rsi_1 = rax_22
    
    char* rax_25 = sub_140a82f30(r15_1, 0)
    
    if (i_4 s> 0)
        int64_t i
        
        do
            int64_t r9 = *arg1
            int32_t var_d8
            int32_t var_d0
            int32_t var_c8
            (*(r9 + 0x150))(arg1, rax_25, *rsi_1, r9, var_d8, var_d0, var_c8)
            var_c8 = 0
            var_d0 = 0
            var_d8 = *rsi_1
            sub_140b02330(rbx, r12, rsi_1[1].d, rax_25, var_d8, var_d0)
            r12 += rsi_1[1]
            rsi_1 = &rsi_1[2]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    sub_140a74f90(rax_25)
    result = j_sub_140a74f90(rax_22)
else if ((result & 2) != 0)
    int32_t rcx_20
    rcx_20.b = arg4:4.d == 0
    
    if ((rcx_20.b & sub_140b5b8a0(rbx.d, 0x101)) != 0)
        int64_t* rcx_21 = arg1[0xe]
        
        if (rcx_21 != 0)
            rbx = *(*(*rcx_21 + 0x50))(rcx_21, &var_80)
    
    int64_t* rcx_22 = arg1[1]
    int64_t var_58 = sx.q(data_14399fa60)
    int64_t var_60 = 0x9e2a83c1
    int64_t* rdx_13 = *rcx_22
    
    if (&rdx_13[1] u> rcx_22[1])
        sub_140b4b460(arg1, &var_60, arg5)
    else
        var_60 = *rdx_13
        *rcx_22 += 8
    
    int64_t* rcx_24 = arg1[1]
    int64_t* rdx_15 = *rcx_24
    
    if (&rdx_15[1] u> rcx_24[1])
        sub_140b4b460(arg1, &var_58, arg5)
    else
        var_58 = *rdx_15
        *rcx_24 += 8
    
    int64_t rcx_26 = sx.q(data_14399fa60)
    int64_t rdx_18 = *arg1
    uint64_t i_2 = divs.dp.q(sx.o(rcx_26 - 1 + rsi), rcx_26) + 1
    i_3 = i_2
    var_80.q = (*(rdx_18 + 0x20))(arg1, rdx_18)
    void* var_a0_1 = 0x10
    int64_t rax_40 = 0x10 * i_2
    
    if (mulu.dp.q(0x10, i_2) u>> 0x40 != zx.o(0))
        rax_40 = -1
    
    int64_t* rax_41 = j_sub_140a82f30(rax_40)
    
    if (i_2 s> 0)
        int64_t* rsi_2 = rax_41
        uint64_t i_5 = i_2
        uint64_t i_1
        
        do
            sub_140b4cda0(arg1, rsi_2, arg5)
            rsi_2 = &rsi_2[2]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        rsi = var_90
    
    int32_t r14_2 = 0
    rax_41[1] = rsi
    *rax_41 = 0
    int128_t* r13_2
    
    if (arg7 == 0)
        r13_2 = r12
    else
        r13_2 = sub_140a82f30(sx.q(data_14399fa60), 0)
    
    int32_t rax_44 = data_14399fa60 * 2
    char* rax_45 = sub_140a82f30(sx.q(rax_44), 0)
    char* var_b0_2 = rax_45
    
    if (rsi s> 0)
        uint64_t rcx_32 = zx.q(data_14399fa60)
        
        while (true)
            int64_t r15_3 = sx.q(rcx_32.d)
            
            if (rsi s<= r15_3)
                r15_3 = rsi
            
            if (arg7 != 0)
                (*(*r12 + 0x150))(r12, r13_2, r15_3)
                rax_45 = var_b0_2
            
            int32_t var_b4 = rax_44
            int32_t var_c8_1 = 0
            sub_140aecc20(rbx, rax_45, &var_b4, r13_2, r15_3.d, arg6)
            int64_t rsi_3 = sx.q(var_b4)
            int128_t* rax_47 = r13_2
            r13_2 += r15_3
            
            if (arg7 != 0)
                r13_2 = rax_47
            
            (*(*arg1 + 0x150))(arg1, var_b0_2, rsi_3)
            int64_t* rcx_38 = var_a0_1
            *rax_41 += rsi_3
            *(rcx_38 + rax_41) = rsi_3
            *(rcx_38 + rax_41 + 8) = r15_3
            var_a0_1 = &rcx_38[2]
            rcx_32 = sx.q(data_14399fa60)
            rsi = var_90 - rcx_32
            var_90 = rsi
            
            if (rsi s<= 0)
                break
            
            rax_45 = var_b0_2
        
        i_2 = i_3
    
    if (arg7 != 0)
        sub_140a74f90(r13_2)
    
    int512_t zmm1 = sub_140a74f90(var_b0_2)
    int64_t rax_51 = (*(*arg1 + 0x20))(arg1)
    int64_t r8_5 = *arg1
    (*(r8_5 + 0x178))(arg1, var_80.q, r8_5)
    
    if (i_2 s> 0)
        void* rbx_2 = rax_41
        
        do
            int64_t* rcx_44 = arg1[1]
            int64_t* rdx_24 = *rcx_44
            
            if (&rdx_24[1] u> rcx_44[1])
                sub_140b4b460(arg1, rbx_2, zmm1)
            else
                *rbx_2 = *rdx_24
                int64_t* rax_54 = arg1[1]
                *rax_54 += 8
            
            int64_t* rcx_46 = arg1[1]
            int64_t* r8_6 = *rcx_46
            
            if (&r8_6[1] u> rcx_46[1])
                sub_140b4b460(arg1, rbx_2 + 8, zmm1)
            else
                *(rbx_2 + 8) = *r8_6
                int64_t* rax_57 = arg1[1]
                *rax_57 += 8
            
            r14_2 += 1
            rbx_2 += 0x10
        while (sx.q(r14_2) s< i_2)
    
    (*(*arg1 + 0x178))(arg1, rax_51)
    result = j_sub_140a74f90(rax_41)
__security_check_cookie(rax_1 ^ &var_f8)
return result

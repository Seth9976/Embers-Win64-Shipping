// 函数: sub_1420546e0
// 地址: 0x1420546e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (not(0f f== *(arg2 + 8)))
    rsi = 1

if (not(0f f== *(arg2 + 0x14)))
    rsi += 1

if (not(0f f== arg2[2].d))
    rsi += 1

if (not(0f f== *(arg2 + 0x2c)))
    rsi += 1

if (not(0f f== *(arg2 + 0x38)))
    rsi += 1

if (not(0f f== *(arg2 + 0x44)))
    rsi += 1

if (not(0f f== arg2[5].d))
    rsi += 1

if (not(0f f== *(arg2 + 0x5c)))
    rsi += 1

if (not(0f f== *(arg2 + 0x68)))
    rsi += 1

if (not(0f f== *(arg2 + 0x74)))
    rsi += 1

if (not(0f f== arg2[8].d))
    rsi += 1

if (*(arg1 + 0xd4) == 0 && rsi == 0)
    *(arg1 + 0xd4) = rsi
    return 

void* r10_1 = &arg1[0xa]
void* rcx = arg2 + 0x1c
int64_t rdx = 0
int32_t r8 = 2
uint64_t r9_10
uint32_t zmm1[0x4]

do
    int32_t rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 - 1 && rsi s>= r8 - 1)
        zmm1 = *(rcx - 0x18)
        *r10_1 = (*(rcx - 0x1c))[0]
        *(r10_1 + 4) = zmm1[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 && rsi s>= r8)
        arg1[rdx + 0xb].d = (*(rcx - 0x10))[0]
        *(&arg1[rdx] + 0x5c) = (*(rcx - 0xc))[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 + 1 && rsi s>= r8 + 1)
        arg1[rdx + 0xc].d = (*(rcx - 4))[0]
        *(&arg1[rdx] + 0x64) = (*rcx)[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 + 2 && rsi s>= r8 + 2)
        arg1[rdx + 0xd].d = (*(rcx + 8))[0]
        *(&arg1[rdx] + 0x6c) = (*(rcx + 0xc))[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 + 3 && rsi s>= r8 + 3)
        arg1[rdx + 0xe].d = (*(rcx + 0x14))[0]
        *(&arg1[rdx] + 0x74) = (*(rcx + 0x18))[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 + 4 && rsi s>= r8 + 4)
        arg1[rdx + 0xf].d = (*(rcx + 0x20))[0]
        *(&arg1[rdx] + 0x7c) = (*(rcx + 0x24))[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 + 5 && rsi s>= r8 + 5)
        arg1[rdx + 0x10].d = (*(rcx + 0x2c))[0]
        *(&arg1[rdx] + 0x84) = (*(rcx + 0x30))[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 + 6 && rsi s>= r8 + 6)
        arg1[rdx + 0x11].d = (*(rcx + 0x38))[0]
        *(&arg1[rdx] + 0x8c) = (*(rcx + 0x3c))[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 + 7 && rsi s>= r8 + 7)
        arg1[rdx + 0x12].d = (*(rcx + 0x44))[0]
        *(&arg1[rdx] + 0x94) = (*(rcx + 0x48))[0]
        rax_1 = *(arg1 + 0xd4)
    
    if (rax_1 s< r8 + 8 && rsi s>= r8 + 8)
        arg1[rdx + 0x13].d = (*(rcx + 0x50))[0]
        *(&arg1[rdx] + 0x9c) = (*(rcx + 0x54))[0]
        rax_1 = *(arg1 + 0xd4)
    
    r9_10 = zx.q(r8 + 9)
    
    if (rax_1 s< r9_10.d && rsi s>= r9_10.d)
        arg1[rdx + 0x14].d = (*(rcx + 0x5c))[0]
        *(&arg1[rdx] + 0xa4) = (*(rcx + 0x60))[0]
    
    r8 += 0xb
    rdx += 0xb
    r10_1 += 0x58
    rcx += 0x84
while (r8 - 2 u< 0xb)

uint32_t zmm6[0x4]
uint32_t var_38_1[0x4] = zmm6
char var_c8
int64_t var_b8
int64_t* var_b0
int64_t arg_8
uint32_t zmm0[0x4]

if (rsi u>= 2)
    int32_t* rdx_6
    
    if (arg1[1].d == *(arg1 + 0x34))
    label_142054a6d:
        rdx_6 = nullptr
    else
        int64_t rax_4 = data_143e1eed8
        arg_8 = rax_4
        int32_t rax_6 = sub_140b5ead0(rax_4.d) + arg_8:4.d
        void* r8_1 = &arg1[7]
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_8 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_6)) << 2))
        
        if (rax_8 == 0xffffffff)
        label_142054a6d_1:
            rdx_6 = nullptr
        else
            r9_10 = *arg1
            int64_t rdx_5
            
            while (true)
                int64_t r8_2 = sx.q(rax_8) * 5
                rdx_5 = r9_10 + (r8_2 << 3)
                
                if (*(r9_10 + (r8_2 << 3)) == data_143e1eed8)
                    break
                
                rax_8 = *(rdx_5 + 0x20)
                
                if (rax_8 == 0xffffffff)
                    goto label_142054a6d_2
            
            if (rax_8 == 0xffffffff || rdx_5 == 0)
            label_142054a6d_2:
                rdx_6 = nullptr
            else
                rdx_6 = rdx_5 + 0x18
    
    zmm6 = *arg2
    uint32_t zmm7[0x4] = *(arg2 + 4)
    int128_t zmm8 = *(arg2 + 0xc)
    int128_t zmm9 = arg2[1].d
    
    if (rdx_6 == 0)
        if (0f f== *(arg1 + 0xbc))
        label_142054afc:
            zmm6[0] = zmm6[0] f- zmm8.d
            zmm7[0] = zmm7[0] f- zmm9.d
            zmm6[0] = zmm6[0] f* zmm6[0]
            zmm7[0] = zmm7[0] f* zmm7[0]
            zmm6[0] = zmm6[0] f+ zmm7[0]
            *(arg1 + 0xbc) = zmm6[0]
        else
            zmm1 = *(arg1 + 0xac)
            zmm0 = arg1[0x15].d
            zmm1[0] = zmm1[0] f- zmm7[0]
            zmm0[0] = zmm0[0] f- zmm6[0]
            zmm1[0] = zmm1[0] f* zmm1[0]
            zmm0[0] = zmm0[0] f* zmm0[0]
            zmm0[0] = zmm0[0] f+ zmm1[0]
            
            if (zmm0[0] f> 10000f)
                goto label_142054afc
            
            zmm1 = *(arg1 + 0xb4)
            zmm0 = arg1[0x16].d
            zmm1[0] = zmm1[0] f- zmm9.d
            zmm0[0] = zmm0[0] f- zmm8.d
            zmm1[0] = zmm1[0] f* zmm1[0]
            zmm0[0] = zmm0[0] f* zmm0[0]
            zmm0[0] = zmm0[0] f+ zmm1[0]
            
            if (not(zmm0[0] f<= 10000f))
                goto label_142054afc
        
        sub_140a3ef70(arg1, &var_b8)
        *var_b0 = data_143e1eed8
        var_b0[1] = data_143e1eee0.q
        void* rax_11 = data_143e1eee0:8
        var_b0[2] = rax_11
        
        if (rax_11 != 0)
            *(rax_11 + 8) += 1
        
        var_b0[3].d = 0x3f800000
        var_b0[4].d = 0xffffffff
        int64_t rbx_1 = *var_b0
        int32_t r8_3 = (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d)
        var_c8.d = var_b8.d
        sub_142057290(arg1, &arg_8, r8_3, var_b0, var_c8, nullptr)
        
        if (arg1[1].d == *(arg1 + 0x34))
        label_142054bfd:
            rdx_6 = nullptr
        else
            int64_t rax_15 = data_143e1eed8
            arg_8 = rax_15
            int32_t rax_17 = sub_140b5ead0(rax_15.d) + arg_8:4.d
            void* r8_4 = &arg1[7]
            void* rcx_8 = *(r8_4 + 8)
            
            if (rcx_8 != 0)
                r8_4 = rcx_8
            
            int32_t rax_19 = *(r8_4 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_17)) << 2))
            
            if (rax_19 == 0xffffffff)
            label_142054bfd_1:
                rdx_6 = nullptr
            else
                r9_10 = *arg1
                int64_t rdx_13
                
                while (true)
                    int64_t r8_5 = sx.q(rax_19) * 5
                    rdx_13 = r9_10 + (r8_5 << 3)
                    
                    if (*(r9_10 + (r8_5 << 3)) == data_143e1eed8)
                        break
                    
                    rax_19 = *(rdx_13 + 0x20)
                    
                    if (rax_19 == 0xffffffff)
                        goto label_142054bfd_2
                
                if (rax_19 == 0xffffffff || rdx_13 == 0)
                label_142054bfd_2:
                    rdx_6 = nullptr
                else
                    rdx_6 = rdx_13 + 0x18
    
    zmm6[0] = zmm6[0] f- zmm8.d
    zmm7[0] = zmm7[0] f- zmm9.d
    zmm6[0] = zmm6[0] f* zmm6[0]
    zmm7[0] = zmm7[0] f* zmm7[0]
    zmm6[0] = zmm6[0] f+ zmm7[0]
    zmm6[0] = zmm6[0] f/ *(arg1 + 0xbc)
    *rdx_6 = zmm6[0]
    var_b8 = data_143e1eed8
    int64_t* rax_21 = data_143e1eee0.q
    void* rax_22 = data_143e1eee0:8
    void* var_a8_1 = rax_22
    
    if (rax_22 != 0)
        *(rax_22 + 8) += 1
    
    r9_10.b = 1
    char var_c8_1 = 0
    arg1[0x15].d = sub_14205ef10(arg1, arg3, &var_b8, r9_10.b, 0)
    *(arg1 + 0xac) = zmm7[0]
    arg1[0x16].d = zmm8.d
    *(arg1 + 0xb4) = zmm9.d
    uint32_t zmm1_1[0x4] = *arg2
    uint32_t zmm0_1[0x4] = *(arg2 + 4)
    zmm1_1[0] = zmm1_1[0] f- *(arg2 + 0xc)
    zmm0_1[0] = zmm0_1[0] f- arg2[1].d
    float zmm0_2[0x4] = sub_140a3f4a0(zmm0_1, zmm1_1)
    zmm0_2[0] = zmm0_2[0] * 57.2957764f
    float zmm6_2 = sub_140a454f0(zmm0_2, 0x43b40000)
    
    if (not(zmm6_2 >= 0f))
        zmm6_2 = zmm6_2 + 360f
    
    int64_t r9_12
    
    if (arg1[1].d == *(arg1 + 0x34))
    label_142054d4f:
        arg1[0x18].d = zmm6_2
        sub_140a3ef70(arg1, &var_b8)
        *rax_21 = data_143e1f010
        rax_21[1] = data_143e1f018.q
        void* rax_31 = data_143e1f018:8
        rax_21[2] = rax_31
        
        if (rax_31 != 0)
            *(rax_31 + 8) += 1
        
        rax_21[3].d = 0
        rax_21[4].d = 0xffffffff
        int64_t rbx_3 = *rax_21
        int32_t r8_9 = (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d)
        var_c8_1.d = var_b8.d
        sub_142057290(arg1, &arg_8, r8_9, rax_21, var_c8_1, nullptr)
        var_b8 = data_143e1f010
        var_b0 = data_143e1f018.q
        void* rax_36 = data_143e1f018:8
        void* var_a8_2 = rax_36
        
        if (rax_36 != 0)
            *(rax_36 + 8) += 1
        
        var_c8 = 0
    else
        int64_t rax_24 = data_143e1f010
        arg_8 = rax_24
        int32_t rax_26 = sub_140b5ead0(rax_24.d) + arg_8:4.d
        void* r8_7 = &arg1[7]
        void* rcx_12 = *(r8_7 + 8)
        
        if (rcx_12 != 0)
            r8_7 = rcx_12
        
        int32_t rax_28 = *(r8_7 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_26)) << 2))
        
        if (rax_28 == 0xffffffff)
            goto label_142054d4f
        
        r9_12 = *arg1
        int64_t rdx_18
        
        while (true)
            rdx_18 = sx.q(rax_28)
            int64_t r8_8 = rdx_18 * 5
            
            if (*(r9_12 + (r8_8 << 3)) == data_143e1f010)
                break
            
            rax_28 = *(r9_12 + (r8_8 << 3) + 0x20)
            
            if (rax_28 == 0xffffffff)
                goto label_142054d4f
        
        if (rax_28 == 0xffffffff)
            goto label_142054d4f
        
        void* rax_44 = r9_12 + rdx_18 * 0x28
        
        if (rax_44 == 0 || rax_44 == -0x18)
            goto label_142054d4f
        
        *(rax_44 + 0x18) = zmm6_2 f- arg1[0x18].d
        var_b8 = data_143e1f010
        var_b0 = data_143e1f018.q
        void* rax_48 = data_143e1f018:8
        void* var_a8_5 = rax_48
        
        if (rax_48 != 0)
            *(rax_48 + 8) += 1
        
        var_c8 = 0
    
    r9_12.b = 1
    sub_14205ef10(arg1, arg3, &var_b8, r9_12.b, 0)

if (*(arg1 + 0xd4) s>= 2 && rsi u< 2)
    var_b8 = data_143e1eed8
    int64_t var_b0_2 = data_143e1eee0.q
    void* rax_39 = data_143e1eee0:8
    void* var_a8_3 = rax_39
    
    if (rax_39 != 0)
        *(rax_39 + 8) += 1
    
    sub_14205ef10(arg1, arg3, &var_b8, 0, 1)
    var_b8 = data_143e1f010
    var_b0 = data_143e1f018.q
    void* rax_42 = data_143e1f018:8
    void* var_a8_4 = rax_42
    
    if (rax_42 != 0)
        *(rax_42 + 8) += 1
    
    var_c8 = 1
    sub_14205ef10(arg1, arg3, &var_b8, 0, 1)

int32_t rax = *(arg1 + 0xd4)

if (rax != 0 || rsi != 1)
    bool cond:1_1 = rax s< 1
    
    if (rax != 1)
        goto label_142054f94
    
    if (rsi != rax)
        cond:1_1 = rax s< 1
    label_142054f94:
        
        if (not(cond:1_1) && rsi == 0 && not(0.25f f<= arg1[0x1a].d))
            zmm1 = arg1[0x19].d
            float zmm2 = *(arg1 + 0xcc) f- *(arg1 + 0x54)
            arg4 = arg1[0xa].d
            zmm1[0] = zmm1[0] f- arg4.d
            zmm1[0] = zmm1[0] f* zmm1[0]
            
            if (not(zmm2 * zmm2 f+ zmm1[0] <= 10000f))
                zmm0 = *(arg1 + 0x54)
                zmm1[0] = zmm1[0] f- arg4.d
                zmm0[0] = zmm0[0] f- *(arg1 + 0xcc)
                float zmm0_4[0x4] = sub_140a3f4a0(zmm0, zmm1)
                zmm0_4[0] = zmm0_4[0] * 57.2957764f
                float zmm6_3 = sub_140a454f0(zmm0_4, 0x43b40000)
                
                if (not(zmm6_3 >= 0f))
                    zmm6_3 = zmm6_3 + 360f
                
                sub_140a3ef70(arg1, &var_b8)
                *var_b0 = data_143e1eff8
                var_b0[1] = data_143e1f000.q
                void* rax_51 = data_143e1f000:8
                var_b0[2] = rax_51
                
                if (rax_51 != 0)
                    *(rax_51 + 8) += 1
                
                var_b0[3].d = zmm6_3
                var_b0[4].d = 0xffffffff
                int64_t rbx_5 = *var_b0
                int32_t r8_13 = (rbx_5 u>> 0x20).d + sub_140b5ead0(rbx_5.d)
                var_c8.d = var_b8.d
                sub_142057290(arg1, &arg_8, r8_13, var_b0, var_c8, nullptr)
                var_b8 = data_143e1eff8
                int64_t var_b0_3 = data_143e1f000.q
                void* rax_56 = data_143e1f000:8
                void* var_a8_6 = rax_56
                
                if (rax_56 != 0)
                    *(rax_56 + 8) += 1
                
                sub_14205ef10(arg1, arg3, &var_b8, 1, 1)
    else
        int128_t zmm14
        zmm14.d = arg4.d f+ arg1[0x1a].d
        arg1[0x19].d = (*arg2)[0]
        *(arg1 + 0xcc) = (*(arg2 + 4))[0]
        arg1[0x1a].d = zmm14.d
else
    arg1[0x1a].d = 0

*(arg1 + 0xd4) = rsi

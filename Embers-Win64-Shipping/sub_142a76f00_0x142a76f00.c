// 函数: sub_142a76f00
// 地址: 0x142a76f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
int32_t* r12 = arg4
int64_t rbx = sx.q(arg2)

if (*arg4 s> 0)
    return 

void* rcx = *(arg1 + 8)
int64_t r14_1 = *(*(rcx + 0x20) + 0x18)
int64_t var_d8_1 = r14_1
char rax_2 = (*(rcx + 0x30)).b
void* r15_1

if ((rax_2 & 0x11) == 0)
    r15_1 = rcx + 0x32
    
    if ((rax_2 & 2) == 0)
        r15_1 = *(rcx + 0x40)
else
    r15_1 = nullptr

void* var_d0_1 = r15_1
void* rax_3 = *(rcx + 0x68)
int64_t r13_1 = *(*(arg1 + 0x20) + 0x30)
*(arg1 + 0x38) = *(rcx + 0x80)
int64_t* rdi_1 = sub_142a7ca90(arg1)
uint64_t rax = zx.q(*(arg1 + 0x13c))

if (rax.d s> 0)
    *r12 = rax.d
    return 

rdi_1[1] = 0
*rdi_1 = rbx
int32_t i = 0

if (*(*(arg1 + 8) + 0x84) s> 0)
    int64_t* rcx_2 = nullptr
    
    do
        *(rcx_2 + *(arg1 + 0xc0)) = 0
        i += 1
        rcx_2 = &rcx_2[1]
    while (i s< *(*(arg1 + 8) + 0x84))

int64_t rax_10 = rdi_1[1]
int32_t rbp_1 = *(r14_1 + (rax_10 << 3))
uint64_t rbp_2 = zx.q(rbp_1) & 0xffffff
rdi_1[1] = rax_10 + 1
int32_t rcx_5 = (rbp_1 u>> 0x18) - 1

if (rcx_5 u> 0x39)
label_142a78b91:
    abort()
    noreturn

while (true)
    int64_t rax_22
    int64_t rcx_16
    int64_t rcx_22
    void* rdx_8
    int64_t* rbx_28
    uint64_t r8_3
    int64_t r8_39
    bool cond:7_1
    bool cond:11_1
    
    switch (jump_table_142a78bb4[sx.q(rcx_5)])
        case 0x2a7702e
        label_142a7702e:
            int64_t rax_12 = sx.q(*(arg1 + 0x38))
            void* rdx = *(arg1 + 0xb0)
            int32_t temp0_1 = *(rdx + 8)
            *(rdx + 8) -= rax_12.d
            int32_t rcx_8 = *(rdx + 8)
            
            if (temp0_1 - rax_12.d s< 0)
                rcx_8 = 0
            
            *(rdx + 8) = rcx_8
            rdi_1 = *(rdx + 0x18) + ((sx.q(rcx_8) - rax_12) << 3)
            goto label_142a78b22
        case 0x2a77058
            int64_t rdx_1 = *rdi_1
            
            if (rdx_1 s>= *(arg1 + 0x78))
            label_142a77686:
                *(arg1 + 0xa8) = 1
                goto label_142a771d2
            
            uint32_t rcx_11 = zx.d(*(r13_1 + (rdx_1 << 1)))
            *rdi_1 = rdx_1 + 1
            
            if ((rcx_11 & 0xfffffc00) == 0xd800 && rdx_1 + 1 != *(arg1 + 0x78))
                uint32_t r8 = zx.d(*(r13_1 + ((rdx_1 + 1) << 1)))
                
                if ((r8 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rdx_1 + 2
                    rcx_11 = ((rcx_11 - 0xd7f7) << 0xa) + r8
            
            if (rcx_11 == rbp_2.d)
                goto label_142a78b22
            
            goto label_142a771d2
        case 0x2a770ba
            int64_t rax_15 = rdi_1[1]
            int32_t r11_1 = *(r14_1 + (rax_15 << 3))
            rdi_1[1] = rax_15 + 1
            int64_t rbx_1 = *rdi_1
            int16_t* rdx_4 = (rbx_1 << 1) + r13_1
            uint64_t r11_2 = zx.q(r11_1) & 0xffffff
            void* r8_1 = &rdx_4[r11_2]
            
            if (rdx_4 u>= r8_1)
            label_142a77156:
                rax = rbx_1 + r11_2
            label_142a78b1d:
                *rdi_1 = rax
                goto label_142a78b22
            
            void* r9_1 = r15_1 + (rbp_2 << 1) - rdx_4
            
            while (true)
                if (rdx_4 u>= (*(arg1 + 0x78) << 1) + r13_1)
                    *(arg1 + 0xa8) = 1
                    break
                
                int16_t rcx_14 = *rdx_4
                int16_t rax_18 = *(r9_1 + rdx_4)
                rdx_4 = &rdx_4[1]
                
                if (rcx_14 != rax_18)
                    break
                
                if (rdx_4 u>= r8_1)
                    goto label_142a77156
            
            goto label_142a77129
        case 0x2a7715f
            r8_3 = zx.q(rbp_2.d)
        label_142a77170:
            rdi_1 = sub_142a78ca0(arg1, rdi_1, r8_3, r12)
            goto label_142a78b22
        case 0x2a77178
            if (arg3 != 0 && *rdi_1 != *(arg1 + 0x78))
                goto label_142a77129
            
            rax.b = 1
            goto label_142a78b5a
        case 0x2a77195
            rdi_1[zx.q((rbp_2 + 2).d) + 2] = *rdi_1
        label_142a78b22:
            
            if (*r12 s> 0)
                goto label_142a78b58
            
            int64_t rax_270 = rdi_1[1]
            int32_t rcx_211 = *(r14_1 + (rax_270 << 3))
            rbp_2 = zx.q(rcx_211) & 0xffffff
            rdi_1[1] = rax_270 + 1
            rcx_5 = (rcx_211 u>> 0x18) - 1
            
            if (rcx_5 u> 0x39)
                goto label_142a78b91
            
            r15_1 = var_d0_1
            continue
        case 0x2a771a5
            rdi_1[rbp_2 + 2] = rdi_1[zx.q((rbp_2 + 2).d) + 2]
            rdi_1[zx.q((rbp_2 + 1).d) + 2] = *rdi_1
            goto label_142a78b22
        case 0x2a771c2
            int64_t r8_4 = *(arg1 + 0x58)
            int64_t rdx_7 = *rdi_1
            
            if (rdx_7 s< r8_4 - 2)
                goto label_142a771d2
            
            if (rdx_7 s>= r8_4)
                goto label_142a771fd
            
            if (rdx_7 != r8_4 - 1)
                if (rdx_7 != r8_4 - 2 || *(r13_1 + (rdx_7 << 1)) != 0xd
                        || *(r13_1 + (rdx_7 << 1) + 2) != 0xa)
                    goto label_142a77129
                
                *(arg1 + 0xa8) = 0x101
                goto label_142a78b22
            
            uint32_t rcx_23 = zx.d(*(r13_1 + (rdx_7 << 1)))
            
            if ((rcx_23 & 0xfffff800) == 0xd800)
                if ((0x400 & rcx_23) != 0)
                    if (rdx_7 s> *(arg1 + 0x50))
                        uint32_t rdx_10 = zx.d(*(r13_1 + (rdx_7 << 1) - 2))
                        
                        if ((rdx_10 & 0xfffffc00) == 0xd800)
                            rcx_23 += (rdx_10 - 0xd7f7) << 0xa
                else if (rdx_7 + 1 != r8_4)
                    uint32_t rdx_9 = zx.d(*(r13_1 + (*rdi_1 << 1) + 2))
                    
                    if ((rdx_9 & 0xfffffc00) == 0xdc00)
                        rcx_23 = ((rcx_23 - 0xd7f7) << 0xa) + rdx_9
            
            if (sub_142a7b5d0(rcx_23).b == 0)
                goto label_142a77129
            
            if (rcx_23 != 0xa)
                goto label_142a771fd
            
            rax = *rdi_1
            
            if (rax s<= *(arg1 + 0x50))
                goto label_142a771fd
            
            if (*(r13_1 + (rax << 1) - 2) == 0xd)
                goto label_142a77129
            
            *(arg1 + 0xa8) = 0x101
            goto label_142a78b22
        case 0x2a772f2
            int64_t rcx_27 = *(arg1 + 0x58) - 1
            rax = *rdi_1
            
            if (rax s< rcx_27)
                goto label_142a77129
            
            if (rax != rcx_27)
                goto label_142a771fd
            
            if (*(r13_1 + (rax << 1)) != 0xa)
                goto label_142a77129
            
            *(arg1 + 0xa8) = 0x101
            goto label_142a78b22
        case 0x2a77326
            int64_t rdx_11 = *rdi_1
            
            if (rdx_11 s>= *(arg1 + 0x58))
                *(arg1 + 0xa8) = 0x101
                goto label_142a78b22
            
            uint32_t rcx_28 = zx.d(*(r13_1 + (rdx_11 << 1)))
            
            if (sub_142a7b5d0(rcx_28).b == 0 || (rcx_28 == 0xa && rdx_11 s> *(arg1 + 0x50)
                    && *(r13_1 + (rdx_11 << 1) - 2) == 0xd))
                goto label_142a77129
            
            goto label_142a78b22
        case 0x2a77375
            rax = *rdi_1
            
            if (rax s>= *(arg1 + 0x58))
                *(arg1 + 0xa8) = 0x101
                goto label_142a78b22
            
            cond:7_1 = *(r13_1 + (rax << 1)) == 0xa
        case 0x2a7739e
            if (*rdi_1 == *(arg1 + 0x50))
                goto label_142a78b22
            
            goto label_142a77129
        case 0x2a773b0
            rax = *rdi_1
            
            if (rax == *(arg1 + 0x50))
                goto label_142a78b22
            
            if (rax s>= *(arg1 + 0x58))
                goto label_142a77129
            
            if (sub_142a7b5d0(zx.d(*(r13_1 + (rax << 1) - 2))).b != 0)
                goto label_142a78b22
            
            goto label_142a77129
        case 0x2a773df
            rax = *rdi_1
            
            if (rax s<= *(arg1 + 0x50))
                goto label_142a78b22
            
            cond:7_1 = *(r13_1 + (rax << 1) - 2) == 0xa
            goto label_142a77393
        case 0x2a773f5
            rax.b = sub_142a7b400(arg1, *rdi_1).b ^ rbp_2.d != 0
            
            if (rax.b != 0)
                goto label_142a78b22
            
            goto label_142a77129
        case 0x2a77411
            rax.b = sub_142a7b600(arg1, *rdi_1).b ^ rbp_2.d != 0
            
            if (rax.b != 0)
                goto label_142a78b22
            
            goto label_142a77129
        case 0x2a7742e
            int64_t rdx_14 = *rdi_1
            
            if (rdx_14 s< *(arg1 + 0x78))
                uint32_t rcx_34 = zx.d(*(r13_1 + (rdx_14 << 1)))
                *rdi_1 = rdx_14 + 1
                
                if ((rcx_34 & 0xfffffc00) == 0xd800 && rdx_14 + 1 != *(arg1 + 0x78))
                    uint32_t r8_5 = zx.d(*(r13_1 + ((rdx_14 + 1) << 1)))
                    
                    if ((r8_5 & 0xfffffc00) == 0xdc00)
                        *rdi_1 = rdx_14 + 2
                        rcx_34 = ((rcx_34 - 0xd7f7) << 0xa) + r8_5
                
                rax.b = rbp_2.d != 0
                
                if (sub_142a53dd0(rcx_34).b == 9 != rax.b)
                    goto label_142a78b22
                
                goto label_142a77129
            
            *(arg1 + 0xa8) = 1
        label_142a771d2:
            rax_22 = sx.q(*(arg1 + 0x38))
            rdx_8 = *(arg1 + 0xb0)
            int32_t temp3_1 = *(rdx_8 + 8)
            *(rdx_8 + 8) -= rax_22.d
            int32_t rcx_21 = *(rdx_8 + 8)
            
            if (temp3_1 - rax_22.d s< 0)
                rcx_21 = 0
            
            *(rdx_8 + 8) = rcx_21
            rcx_22 = sx.q(rcx_21)
        label_142a771ec:
            rcx_16 = rcx_22 - rax_22
            rax = *(rdx_8 + 0x18)
        label_142a7714d:
            rdi_1 = rax + (rcx_16 << 3)
            goto label_142a78b22
        case 0x2a774a7
            char rcx_38 = *(arg1 + 0x82)
            
            if (rcx_38 != 0)
                if (*rdi_1 == *(arg1 + 0x90))
                    goto label_142a78b22
                
                if (rcx_38 != 0)
                    goto label_142a7702e
                
                goto label_142a774ce
            
        label_142a774ce:
            cond:7_1 = *rdi_1 == *(arg1 + 0x70)
        case 0x2a774d6
            int64_t rcx_39 = *rdi_1
            
            if (rcx_39 s>= *(arg1 + 0x78))
            label_142a774df:
                *(arg1 + 0xa8) = 1
                goto label_142a77129
            
            uint32_t rbx_2 = zx.d(*(r13_1 + (rcx_39 << 1)))
            *rdi_1 = rcx_39 + 1
            
            if ((rbx_2 & 0xfffffc00) == 0xd800 && rcx_39 + 1 != *(arg1 + 0x78))
                uint32_t rdx_16 = zx.d(*(r13_1 + ((rcx_39 + 1) << 1)))
                
                if ((rdx_16 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rcx_39 + 2
                    rbx_2 = ((rbx_2 - 0xd7f7) << 0xa) + rdx_16
            
            char rcx_42
            
            if (sub_142a53dd0(rbx_2).b == 0xc || rbx_2 == 9)
                rcx_42 = 1
            else
                rcx_42 = 0
            
            rax.b = rbp_2.d != 0
            cond:11_1 = rax.b != rcx_42
        label_142a7754e:
            
            if (cond:11_1)
                goto label_142a78b22
            
            goto label_142a771d2
        case 0x2a7755e
            int64_t rdx_17 = *rdi_1
            
            if (rdx_17 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
            label_142a77129:
                void* r8_2 = *(arg1 + 0xb0)
                int64_t rdx_5 = sx.q(*(arg1 + 0x38))
                int32_t temp4_1 = *(r8_2 + 8)
                *(r8_2 + 8) -= rdx_5.d
                int32_t rax_19 = *(r8_2 + 8)
                
                if (temp4_1 - rdx_5.d s< 0)
                    rax_19 = 0
                
                *(r8_2 + 8) = rax_19
                rcx_16 = sx.q(rax_19) - rdx_5
                rax = *(r8_2 + 0x18)
                goto label_142a7714d
            
            uint32_t rcx_43 = zx.d(*(r13_1 + (rdx_17 << 1)))
            *rdi_1 = rdx_17 + 1
            
            if ((rcx_43 & 0xfffffc00) == 0xd800 && rdx_17 + 1 != *(arg1 + 0x78))
                uint32_t r8_6 = zx.d(*(r13_1 + ((rdx_17 + 1) << 1)))
                
                if ((r8_6 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rdx_17 + 2
                    rcx_43 = ((rcx_43 - 0xd7f7) << 0xa) + r8_6
            
            if (sub_142a7b5d0(rcx_43).b == 0)
                goto label_142a77129
            
            if (rcx_43 == 0xd)
                int64_t rdx_19 = *rdi_1
                
                if (rdx_19 s< *(arg1 + 0x78))
                    uint32_t rcx_46 = zx.d(*(r13_1 + (rdx_19 << 1)))
                    *rdi_1 = rdx_19 + 1
                    
                    if ((rcx_46 & 0xfffffc00) == 0xd800 && rdx_19 + 1 != *(arg1 + 0x78))
                        uint32_t r8_7 = zx.d(*(r13_1 + ((rdx_19 + 1) << 1)))
                        
                        if ((r8_7 & 0xfffffc00) == 0xdc00)
                            *rdi_1 = rdx_19 + 2
                            rcx_46.w += 9
                            rcx_46.w = rcx_46.w * 0x400 + r8_7.w
                    
                    if (rcx_46.w != 0xa)
                        *rdi_1 -= 1
                        int64_t rcx_48 = *rdi_1
                        
                        if ((zx.d(*(r13_1 + (rcx_48 << 1))) & 0xfffffc00) == 0xdc00 && rcx_48 s> 0
                                && (zx.d(*(r13_1 + (rcx_48 << 1) - 2)) & 0xfffffc00) == 0xd800)
                            *rdi_1 = rcx_48 - 1
            
            goto label_142a78b22
        case 0x2a7767d
            int64_t rdx_21 = *rdi_1
            
            if (rdx_21 s>= *(arg1 + 0x78))
                goto label_142a77686
            
            uint32_t rcx_49 = zx.d(*(r13_1 + (rdx_21 << 1)))
            *rdi_1 = rdx_21 + 1
            
            if ((rcx_49 & 0xfffffc00) == 0xd800 && rdx_21 + 1 != *(arg1 + 0x78))
                uint32_t r8_8 = zx.d(*(r13_1 + ((rdx_21 + 1) << 1)))
                
                if ((r8_8 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rdx_21 + 2
                    rcx_49 = ((rcx_49 - 0xd7f7) << 0xa) + r8_8
            
            rax = sub_142a7b5d0(rcx_49)
            rcx_49.b = rbp_2.d != 0
            rax.b ^= rcx_49.b
            
            if (rax.b != 0)
                goto label_142a78b22
            
            goto label_142a771d2
        case 0x2a776f1
            int64_t rcx_52 = *rdi_1
            
            if (rcx_52 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
                goto label_142a77129
            
            uint32_t rbx_5 = zx.d(*(r13_1 + (rcx_52 << 1)))
            *rdi_1 = rcx_52 + 1
            
            if ((rbx_5 & 0xfffffc00) == 0xd800 && rcx_52 + 1 != *(arg1 + 0x78))
                uint32_t rdx_23 = zx.d(*(r13_1 + ((rcx_52 + 1) << 1)))
                
                if ((rdx_23 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rcx_52 + 2
                    rbx_5 = ((rbx_5 - 0xd7f7) << 0xa) + rdx_23
            
            void* rbp_3 = *(*(arg1 + 8) + 0x90)
            int64_t rax_67
            
            if (sub_142a9f280(*(rbp_3 + 0x28), zx.q(rbx_5)) != 0)
            label_142a779ac:
                
                while (*rdi_1 s< *(arg1 + 0x78))
                    int64_t rax_100 = *rdi_1
                    uint32_t rdx_41 = zx.d(*(r13_1 + (rax_100 << 1)))
                    *rdi_1 = rax_100 + 1
                    
                    if ((rdx_41 & 0xfffffc00) == 0xd800 && rax_100 + 1 != *(arg1 + 0x78))
                        uint32_t r8_10 = zx.d(*(r13_1 + ((rax_100 + 1) << 1)))
                        
                        if ((r8_10 & 0xfffffc00) == 0xdc00)
                            *rdi_1 = rax_100 + 2
                            rdx_41 = ((rdx_41 - 0xd7f7) << 0xa) + r8_10
                    
                    if (sub_142a9f280(*(rbp_3 + 0x30), rdx_41) == 0)
                        *rdi_1 -= 1
                        int64_t rcx_76 = *rdi_1
                        
                        if ((zx.d(*(r13_1 + (rcx_76 << 1))) & 0xfffffc00) != 0xdc00)
                            goto label_142a77a60
                        
                        if (rcx_76 s<= 0)
                            goto label_142a77a60
                        
                        if ((zx.d(*(r13_1 + (rcx_76 << 1) - 2)) & 0xfffffc00) != 0xd800)
                            goto label_142a77a60
                        
                        rax_67 = rcx_76 - 1
                        goto label_142a77a57
            else if (sub_142a9f280(*(rbp_3 + 0x38), zx.q(rbx_5)) == 0)
                if (sub_142a9f280(*(rbp_3 + 0x40), zx.q(rbx_5)) == 0)
                    if (sub_142a9f280(*(rbp_3 + 0x48), zx.q(rbx_5)) == 0)
                        if (sub_142a9f280(*(rbp_3 + 0x50), zx.q(rbx_5)) != 0)
                            goto label_142a77910
                        
                        if (sub_142a9f280(*(rbp_3 + 0x58), zx.q(rbx_5)) != 0)
                            goto label_142a778a0
                        
                        if (sub_142a9f280(*(rbp_3 + 0x60), zx.q(rbx_5)) != 0)
                            goto label_142a77910
                        
                        goto label_142a779ac
                    
                label_142a778a0:
                    
                    while (true)
                        int64_t rcx_67 = *rdi_1
                        
                        if (rcx_67 s>= *(arg1 + 0x78))
                            break
                        
                        uint32_t rbx_11 = zx.d(*(r13_1 + (rcx_67 << 1)))
                        *rdi_1 = rcx_67 + 1
                        
                        if ((rbx_11 & 0xfffffc00) == 0xd800 && rcx_67 + 1 != *(arg1 + 0x78))
                            uint32_t rdx_36 = zx.d(*(r13_1 + ((rcx_67 + 1) << 1)))
                            
                            if ((rdx_36 & 0xfffffc00) == 0xdc00)
                                *rdi_1 = rcx_67 + 2
                                rbx_11 = ((rbx_11 - 0xd7f7) << 0xa) + rdx_36
                        
                        if (sub_142a9f280(*(rbp_3 + 0x58), zx.q(rbx_11)) == 0)
                            uint32_t rdx_38 = rbx_11
                            
                            while (true)
                                if (sub_142a9f280(*(rbp_3 + 0x60), rdx_38) == 0)
                                    goto label_142a77972
                                
                            label_142a77910:
                                int64_t rcx_70 = *rdi_1
                                
                                if (rcx_70 s>= *(arg1 + 0x78))
                                    break
                                
                                rdx_38 = zx.d(*(r13_1 + (rcx_70 << 1)))
                                *rdi_1 = rcx_70 + 1
                                
                                if ((rdx_38 & 0xfffffc00) == 0xd800 && rcx_70 + 1 != *(arg1 + 0x78))
                                    uint32_t r8_9 = zx.d(*(r13_1 + ((rcx_70 + 1) << 1)))
                                    
                                    if ((r8_9 & 0xfffffc00) == 0xdc00)
                                        *rdi_1 = rcx_70 + 2
                                        rdx_38 = ((rdx_38 - 0xd7f7) << 0xa) + r8_9
                            
                            break
                else
                    while (true)
                        int64_t rcx_57 = *rdi_1
                        
                        if (rcx_57 s>= *(arg1 + 0x78))
                            break
                        
                        uint32_t rbx_8 = zx.d(*(r13_1 + (rcx_57 << 1)))
                        *rdi_1 = rcx_57 + 1
                        
                        if ((rbx_8 & 0xfffffc00) == 0xd800 && rcx_57 + 1 != *(arg1 + 0x78))
                            uint32_t rdx_27 = zx.d(*(r13_1 + ((rcx_57 + 1) << 1)))
                            
                            if ((rdx_27 & 0xfffffc00) == 0xdc00)
                                *rdi_1 = rcx_57 + 2
                                rbx_8 = ((rbx_8 - 0xd7f7) << 0xa) + rdx_27
                        
                        if (sub_142a9f280(*(rbp_3 + 0x40), zx.q(rbx_8)) == 0)
                            if (sub_142a9f280(*(rbp_3 + 0x48), zx.q(rbx_8)) != 0)
                                goto label_142a778a0
                            
                            if (sub_142a9f280(*(rbp_3 + 0x50), zx.q(rbx_8)) != 0)
                                goto label_142a77910
                            
                            if (sub_142a9f280(*(rbp_3 + 0x58), zx.q(rbx_8)) != 0)
                                goto label_142a778a0
                            
                        label_142a77972:
                            *rdi_1 -= 1
                            int64_t rcx_73 = *rdi_1
                            
                            if ((zx.d(*(r13_1 + (rcx_73 << 1))) & 0xfffffc00) == 0xdc00
                                    && rcx_73 s> 0
                                    && (zx.d(*(r13_1 + (rcx_73 << 1) - 2)) & 0xfffffc00) == 0xd800)
                                *rdi_1 = rcx_73 - 1
                            
                            goto label_142a779ac
            else if (rbx_5 == 0xd)
                int64_t rax_66 = *rdi_1
                
                if (rax_66 s< *(arg1 + 0x78) && *(r13_1 + (rax_66 << 1)) == 0xa)
                    rax_67 = rax_66 + 1
                label_142a77a57:
                    *rdi_1 = rax_67
        label_142a77a60:
            
            if (*rdi_1 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
            
            goto label_142a78b22
        case 0x2a77a75
            if (*rdi_1 s< *(arg1 + 0x58))
                goto label_142a77129
            
        label_142a771fd:
            *(arg1 + 0xa8) = 0x101
            goto label_142a78b22
        case 0x2a77a87
            int64_t rcx_77 = *rdi_1
            
            if (rcx_77 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
                goto label_142a771d2
            
            uint8_t rbx_15 = (rbp_2.d u>> 0x17).b & 1
            uint64_t rbp_4 = zx.q(rbp_2.d) & 0xff7fffff
            uint32_t r9_3 = zx.d(*(r13_1 + (rcx_77 << 1)))
            *rdi_1 = rcx_77 + 1
            
            if ((r9_3 & 0xfffffc00) == 0xd800 && rcx_77 + 1 != *(arg1 + 0x78))
                uint32_t rdx_44 = zx.d(*(r13_1 + ((rcx_77 + 1) << 1)))
                
                if ((rdx_44 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rcx_77 + 2
                    r9_3 = ((r9_3 - 0xd7f7) << 0xa) + rdx_44
            
            if (r9_3 s>= 0x100)
                if (sub_142a9f280(*(*(*(arg1 + 8) + 0x90) + (rbp_4 << 3)), zx.q(r9_3)).b != 0)
                    rbx_15 = rbx_15 == 0
            else if (test_bit(
                    sx.d(*((sx.q(r9_3) s>> 3) + (zx.q(rbp_4.d) << 5) + *(*(arg1 + 8) + 0x98))), 
                    r9_3 & 7))
                rbx_15 = rbx_15 == 0
            
            cond:11_1 = rbx_15 != 0
            goto label_142a7754e
        case 0x2a77b4f
            int64_t rcx_82 = *rdi_1
            
            if (rcx_82 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
                goto label_142a77129
            
            uint32_t r9_7 = zx.d(*(r13_1 + (rcx_82 << 1)))
            *rdi_1 = rcx_82 + 1
            
            if ((r9_7 & 0xfffffc00) == 0xd800 && rcx_82 + 1 != *(arg1 + 0x78))
                uint32_t rdx_50 = zx.d(*(r13_1 + ((rcx_82 + 1) << 1)))
                
                if ((rdx_50 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rcx_82 + 2
                    r9_7 = ((r9_7 - 0xd7f7) << 0xa) + rdx_50
            
            if (r9_7 s< 0x100)
                if (not(test_bit(
                        sx.d(*((sx.q(r9_7) s>> 3) + (zx.q(rbp_2.d) << 5) + *(*(arg1 + 8) + 0x98))), 
                        r9_7 & 7)))
                    goto label_142a78b22
                
                goto label_142a7702e
            
            if (sub_142a9f280(*(*(*(arg1 + 8) + 0x90) + (rbp_2 << 3)), zx.q(r9_7)).b == 0)
                goto label_142a78b22
            
            goto label_142a771d2
        case 0x2a77c0f
            int64_t rcx_87 = *rdi_1
            
            if (rcx_87 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
                goto label_142a77129
            
            uint32_t rbx_16 = zx.d(*(r13_1 + (rcx_87 << 1)))
            *rdi_1 = rcx_87 + 1
            
            if ((rbx_16 & 0xfffffc00) == 0xd800 && rcx_87 + 1 != *(arg1 + 0x78))
                uint32_t rdx_56 = zx.d(*(r13_1 + ((rcx_87 + 1) << 1)))
                
                if ((rdx_56 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rcx_87 + 2
                    rbx_16 = ((rbx_16 - 0xd7f7) << 0xa) + rdx_56
            
            if (rbx_16 s< 0x100)
                if (test_bit(
                        sx.d(*
                            ((sx.q(rbx_16) s>> 3) + (zx.q(rbp_2.d) << 5) + *(*(arg1 + 8) + 0x70))), 
                        rbx_16 & 7))
                    goto label_142a78b22
                
                goto label_142a77129
            
            if (sub_142a9f280(sub_142ae72d0(rax_3, rbp_2.d), zx.q(rbx_16)).b != 0)
                goto label_142a78b22
            
            goto label_142a77129
        case 0x2a77cc4
            int64_t rdx_63 = *rdi_1
            
            if (rdx_63 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
                goto label_142a77129
            
            uint32_t rcx_92 = zx.d(*(r13_1 + (rdx_63 << 1)))
            *rdi_1 = rdx_63 + 1
            
            if ((rcx_92 & 0xfffffc00) == 0xd800 && rdx_63 + 1 != *(arg1 + 0x78))
                uint32_t r8_11 = zx.d(*(r13_1 + ((rdx_63 + 1) << 1)))
                
                if ((r8_11 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rdx_63 + 2
                    rcx_92 = ((rcx_92 - 0xd7f7) << 0xa) + r8_11
            
            if (sub_142a7b5d0(rcx_92).b == 0)
                goto label_142a78b22
            
            goto label_142a77129
        case 0x2a77d33
            int64_t rdx_65 = *rdi_1
            
            if (rdx_65 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
                goto label_142a77129
            
            uint32_t rcx_95 = zx.d(*(r13_1 + (rdx_65 << 1)))
            *rdi_1 = rdx_65 + 1
            
            if ((rcx_95 & 0xfffffc00) == 0xd800 && rdx_65 + 1 != *(arg1 + 0x78))
                uint32_t r8_12 = zx.d(*(r13_1 + ((rdx_65 + 1) << 1)))
                
                if ((r8_12 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rdx_65 + 2
                    rcx_95 = ((rcx_95 - 0xd7f7) << 0xa) + r8_12
            
            if (rcx_95 == 0xd)
                rax = *rdi_1
                
                if (rax s< *(arg1 + 0x78) && *(r13_1 + (rax << 1)) == 0xa)
                    *rdi_1 = rax + 1
            
            goto label_142a78b22
        case 0x2a77dbe
            int64_t rdx_67 = *rdi_1
            
            if (rdx_67 s>= *(arg1 + 0x78))
                *(arg1 + 0xa8) = 1
                goto label_142a771d2
            
            uint32_t rcx_98 = zx.d(*(r13_1 + (rdx_67 << 1)))
            *rdi_1 = rdx_67 + 1
            
            if ((rcx_98 & 0xfffffc00) == 0xd800 && rdx_67 + 1 != *(arg1 + 0x78))
                uint32_t r8_13 = zx.d(*(r13_1 + ((rdx_67 + 1) << 1)))
                
                if ((r8_13 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rdx_67 + 2
                    rcx_98 = ((rcx_98 - 0xd7f7) << 0xa) + r8_13
            
            if (rcx_98 != 0xa)
                goto label_142a78b22
            
            goto label_142a771d2
        case 0x2a77e29
            rdi_1 = sub_142a78ca0(arg1, rdi_1, rdi_1[1], r12)
        label_142a77e40:
            rdi_1[1] = zx.q(rbp_2.d)
            goto label_142a78b22
        case 0x2a77e3e
            goto label_142a77e40
        case 0x2a77e49
            uint64_t rax_151 = zx.q(*(r14_1 + (sx.q((rbp_2 - 1).d) << 3))) & 0xffffff
            
            if (sx.q(rdi_1[rax_151 + 2].d) s< *rdi_1)
                rdi_1 = sub_142a78ca0(arg1, rdi_1, rdi_1[1], r12)
                rdi_1[1] = zx.q(rbp_2.d)
                rdi_1[zx.q(rax_151.d) + 2] = *rdi_1
            
            goto label_142a78b22
        case 0x2a77e90
            rdi_1[rbp_2 + 2] = 0
            int64_t rdx_71 = sx.q(rdi_1[1].d)
            rdi_1[1] += 3
            int32_t rbx_21 = *(r14_1 + (sx.q((rdx_71 + 2).d) << 3))
            
            if (*(r14_1 + (sx.q((rdx_71 + 1).d) << 3)) == 0)
                rdi_1 =
                    sub_142a78ca0(arg1, rdi_1, zx.q((*(r14_1 + (rdx_71 << 3)) & 0xffffff) + 1), r12)
            
            if (rbx_21 == 0xffffffff)
                rdi_1[zx.q((rbp_2 + 1).d) + 2] = *rdi_1
                goto label_142a78b22
            
            if (rbx_21 != 0)
                goto label_142a78b22
            
            goto label_142a77129
        case 0x2a77ef6
            int32_t r8_19 = *(r14_1 + (rbp_2 << 3))
            void* rdx_73 = &rdi_1[zx.q(r8_19) & 0xffffff]
            int64_t r10_3 = sx.q(*(r14_1 + (zx.q((rbp_2 + 2).d) << 3)))
            uint64_t r9_14 = zx.q(*(r14_1 + (zx.q((rbp_2 + 3).d) << 3)))
            *(rdx_73 + 0x10) += 1
            int64_t rcx_108 = *(rdx_73 + 0x10)
            
            if (rcx_108 u< r9_14 || r9_14.d == 0xffffffff)
                if (rcx_108 s< r10_3)
                    *(arg1 + 0x110) -= 1
                    
                    if (*(arg1 + 0x110) s<= 0)
                        sub_142a74820(arg1, r12)
                    
                    rdi_1[1] = zx.q((rbp_2 + 4).d)
                else if (r9_14.d != 0xffffffff)
                    rdi_1 = sub_142a78ca0(arg1, rdi_1, rdi_1[1], r12)
                    rdi_1[1] = zx.q((rbp_2 + 4).d)
                else
                    uint64_t r8_21 = zx.q((r8_19 & 0xffffff) + 1)
                    int64_t rcx_109 = *rdi_1
                    
                    if (rcx_109 != rdi_1[r8_21 + 2])
                        rdi_1[r8_21 + 2] = rcx_109
                        rdi_1 = sub_142a78ca0(arg1, rdi_1, rdi_1[1], r12)
                        rdi_1[1] = zx.q((rbp_2 + 4).d)
            
            goto label_142a78b22
        case 0x2a77f98
            rdi_1[rbp_2 + 2] = 0
            int64_t rdx_76 = sx.q(rdi_1[1].d)
            rdi_1[1] += 3
            int32_t rbx_23 = *(r14_1 + (rdx_76 << 3)) & 0xffffff
            int32_t r8_23 = *(r14_1 + (sx.q((rdx_76 + 1).d) << 3))
            int32_t rdx_77 = *(r14_1 + (sx.q((rdx_76 + 2).d) << 3))
            
            if (rdx_77 == 0xffffffff)
                rdi_1[zx.q((rbp_2 + 1).d) + 2] = *rdi_1
            
            if (r8_23 == 0)
                if (rdx_77 != 0)
                    rdi_1 = sub_142a78ca0(arg1, rdi_1, rdi_1[1], r12)
                
                rdi_1[1] = zx.q(rbx_23 + 1)
            
            goto label_142a78b22
        case 0x2a78004
            int32_t r8_25 = *(r14_1 + (rbp_2 << 3))
            void* rdx_79 = &rdi_1[zx.q(r8_25) & 0xffffff]
            int64_t r10_4 = sx.q(*(r14_1 + (zx.q((rbp_2 + 2).d) << 3)))
            uint64_t r9_17 = zx.q(*(r14_1 + (zx.q((rbp_2 + 3).d) << 3)))
            *(rdx_79 + 0x10) += 1
            int64_t rcx_118 = *(rdx_79 + 0x10)
            
            if (rcx_118 u>= r9_17 && r9_17.d != 0xffffffff)
                goto label_142a78b22
            
            if (rcx_118 s< r10_4)
                rdi_1[1] = zx.q((rbp_2 + 4).d)
                *(arg1 + 0x110) -= 1
                
                if (*(arg1 + 0x110) s<= 0)
                    sub_142a74820(arg1, r12)
                
                goto label_142a78b22
            
            if (r9_17.d != 0xffffffff)
                r8_3 = zx.q((rbp_2 + 4).d)
                goto label_142a77170
            
            uint64_t r8_27 = zx.q((r8_25 & 0xffffff) + 1)
            int64_t rcx_121 = *rdi_1
            
            if (rcx_121 == rdi_1[r8_27 + 2])
                goto label_142a78b22
            
            rdi_1[r8_27 + 2] = rcx_121
            r8_3 = zx.q((rbp_2 + 4).d)
            goto label_142a77170
        case 0x2a7809c
            *(*(arg1 + 0xc0) + (rbp_2 << 3)) = sx.q(*(*(arg1 + 0xb0) + 8))
            goto label_142a78b22
        case 0x2a780b7
            int64_t r11_3 = sx.q(*(*(arg1 + 0xc0) + (rbp_2 << 3)))
            int64_t r9_18 = sx.q(*(arg1 + 0x38))
            int64_t* r10_5 = *(*(arg1 + 0xb0) + 0x18) + ((r11_3 - r9_18) << 3)
            
            if (r10_5 != rdi_1)
                int32_t i_1 = 0
                
                if (r9_18.d s> 0)
                    int64_t* rcx_123 = r10_5
                    
                    do
                        *rcx_123 = *(rdi_1 - r10_5 + rcx_123)
                        i_1 += 1
                        rcx_123 = &rcx_123[1]
                    while (i_1 s< *(arg1 + 0x38))
                
                rdi_1 = r10_5
                sub_142aeb430(*(arg1 + 0xb0), r11_3.d)
            
            goto label_142a78b22
        case 0x2a7811d
            int64_t rdx_85 = rdi_1[rbp_2 + 2]
            int64_t r9_19 = rdi_1[zx.q((rbp_2 + 1).d) + 2]
            int64_t rcx_125 = *rdi_1
            
            if (rdx_85 s< 0)
                goto label_142a771d2
            
            if (rdx_85 s< r9_19)
                int64_t r8_30 = rdx_85
                int16_t* rdx_87 = (r8_30 << 1) + r13_1
                
                while (true)
                    if (rcx_125 s>= *(arg1 + 0x78))
                        goto label_142a77686
                    
                    if (*rdx_87 != *(r13_1 + (rcx_125 << 1)))
                        goto label_142a771d2
                    
                    rcx_125 += 1
                    rdx_87 = &rdx_87[1]
                    r8_30 += 1
                    
                    if (r8_30 s>= r9_19)
                        if ((zx.d(*(r13_1 + (r9_19 << 1) - 2)) & 0xfffffc00) != 0xd800)
                            break
                        
                        if (rcx_125 s>= *(arg1 + 0x78))
                            break
                        
                        if ((zx.d(*(r13_1 + (rcx_125 << 1))) & 0xfffffc00) == 0xdc00)
                            goto label_142a771d2
                        
                        break
            
            *rdi_1 = rcx_125
            goto label_142a78b22
        case 0x2a781b0
            int64_t r8_31 = rdi_1[rbp_2 + 2]
            
            if (r8_31 s< 0)
                goto label_142a77129
            
            void var_60
            sub_142af4980(&var_60, r13_1, r8_31, rdi_1[zx.q((rbp_2 + 1).d) + 2])
            void var_b0
            sub_142af4980(&var_b0, r13_1, *rdi_1, *(arg1 + 0x78))
            int32_t rax_173 = sub_142af49c0(&var_60)
            int32_t rbx_24 = rax_173
            
            if (rax_173 == 0xffffffff)
            label_142a78237:
                
                if (sub_142af49b0(&var_b0) != 0)
                label_142a78251:
                    int64_t rdx_90 = sx.q(*(arg1 + 0x38))
                    void* r8_33 = *(arg1 + 0xb0)
                    int32_t temp7_1 = *(r8_33 + 8)
                    *(r8_33 + 8) -= rdx_90.d
                    int32_t rax_177 = *(r8_33 + 8)
                    
                    if (temp7_1 - rdx_90.d s< 0)
                        rax_177 = 0
                    
                    *(r8_33 + 8) = rax_177
                    rdi_1 = *(r8_33 + 0x18) + ((sx.q(rax_177) - rdx_90) << 3)
                else
                    *rdi_1 = sub_1405948a0(&var_b0)
                
                goto label_142a78b22
            
            while (true)
                int32_t rax_174 = sub_142af49c0(&var_b0)
                
                if (rax_174 == 0xffffffff)
                    *(arg1 + 0xa8) = 1
                    break
                
                if (rax_174 != rbx_24)
                    break
                
                int32_t rax_175 = sub_142af49c0(&var_60)
                rbx_24 = rax_175
                
                if (rax_175 == 0xffffffff)
                    goto label_142a78237
            
            goto label_142a78251
        case 0x2a7829b
            rdi_1[rbp_2 + 2] = *rdi_1
            goto label_142a78b22
        case 0x2a782a8
            int64_t rax_178 = sx.q(rdi_1[1].d)
            rdi_1[1] += 1
            
            if (sx.q(rdi_1[(zx.q(*(r14_1 + (rax_178 << 3))) & 0xffffff) + 2].d) s>= *rdi_1)
                goto label_142a7702e
            
            rdi_1[1] = zx.q(rbp_2.d)
            goto label_142a78b22
        case 0x2a782d3
            *(*(arg1 + 0xc0) + (rbp_2 << 3)) = sx.q(*(*(arg1 + 0xb0) + 8))
            *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 1).d) << 3)) = *rdi_1
            *(arg1 + 0x70) = *(arg1 + 0x60)
            *(arg1 + 0x78) = *(arg1 + 0x68)
            goto label_142a78b22
        case 0x2a7830f
            int64_t r10_7 = sx.q(*(*(arg1 + 0xc0) + (rbp_2 << 3)))
            void* r8_34 = *(arg1 + 0xb0)
            
            if (*(r8_34 + 8) s> r10_7.d)
                int64_t rdx_93 = sx.q(*(arg1 + 0x38))
                int64_t* r9_22 = *(r8_34 + 0x18) + ((r10_7 - rdx_93) << 3)
                int32_t i_2 = 0
                
                if (rdx_93.d s> 0)
                    int64_t* rcx_140 = r9_22
                    
                    do
                        *rcx_140 = *(rdi_1 - r9_22 + rcx_140)
                        i_2 += 1
                        rcx_140 = &rcx_140[1]
                    while (i_2 s< *(arg1 + 0x38))
                
                rdi_1 = r9_22
                sub_142aeb430(*(arg1 + 0xb0), r10_7.d)
            
            *rdi_1 = *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 1).d) << 3))
            *(arg1 + 0x70) = *(arg1 + 0x40)
            *(arg1 + 0x78) = *(arg1 + 0x48)
            goto label_142a78b22
        case 0x2a7839c
            int64_t rdx_95 = *rdi_1
            
            if (rdx_95 s>= *(arg1 + 0x78))
                goto label_142a774df
            
            uint32_t rcx_144 = zx.d(*(r13_1 + (rdx_95 << 1)))
            *rdi_1 = rdx_95 + 1
            
            if ((rcx_144 & 0xfffffc00) == 0xd800 && rdx_95 + 1 != *(arg1 + 0x78))
                uint32_t r8_35 = zx.d(*(r13_1 + ((rdx_95 + 1) << 1)))
                
                if ((r8_35 & 0xfffffc00) == 0xdc00)
                    *rdi_1 = rdx_95 + 2
                    rcx_144 = ((rcx_144 - 0xd7f7) << 0xa) + r8_35
            
            if (j_sub_142a52cd0(rcx_144, 0).d == rbp_2.d)
                goto label_142a78b22
            
            goto label_142a77129
        case 0x2a78405
            void* r15_2 = r15_1 + (rbp_2 << 1)
            int64_t rax_194 = rdi_1[1]
            int32_t r14_2 = *(r14_1 + (rax_194 << 3))
            rdi_1[1] = rax_194 + 1
            r12.b = 1
            int64_t rbp_5 = 0
            void var_88
            sub_142af4980(&var_88, r13_1, *rdi_1, *(arg1 + 0x78))
            uint64_t r14_3 = zx.q(r14_2) & 0xffffff
            
            if (r14_3.d u> 0)
                do
                    uint32_t rbx_27 = zx.d(*(r15_2 + (rbp_5 << 1)))
                    rbp_5 += 1
                    
                    if ((rbx_27 & 0xfffffc00) == 0xd800 && rbp_5 != r14_3)
                        uint32_t rcx_148 = zx.d(*(r15_2 + (rbp_5 << 1)))
                        
                        if ((rcx_148 & 0xfffffc00) == 0xdc00)
                            rbp_5 += 1
                            rbx_27 = ((rbx_27 - 0xd7f7) << 0xa) + rcx_148
                    
                    int32_t rax_200 = sub_142af49c0(&var_88)
                    
                    if (rax_200 != rbx_27)
                        r12.b = 0
                        
                        if (rax_200 == 0xffffffff)
                            *(arg1 + 0xa8) = 1
                        
                        break
                while (rbp_5 s< r14_3)
            
            if (sub_142af49b0(&var_88) != 0 || r12.b == 0)
                int64_t rax_202 = sx.q(*(arg1 + 0x38))
                void* rdx_98 = *(arg1 + 0xb0)
                int32_t temp6_1 = *(rdx_98 + 8)
                *(rdx_98 + 8) -= rax_202.d
                int32_t rcx_152 = *(rdx_98 + 8)
                
                if (temp6_1 - rax_202.d s< 0)
                    rcx_152 = 0
                
                *(rdx_98 + 8) = rcx_152
                rdi_1 = *(rdx_98 + 0x18) + ((sx.q(rcx_152) - rax_202) << 3)
            else
                *rdi_1 = sub_1405948a0(&var_88)
            
            r12 = arg4
            r14_1 = var_d8_1
            goto label_142a78b22
        case 0x2a7850a
            *(*(arg1 + 0xc0) + (rbp_2 << 3)) = sx.q(*(*(arg1 + 0xb0) + 8))
            *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 1).d) << 3)) = *rdi_1
            *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 2).d) << 3)) = -1
            *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 3).d) << 3)) = *(arg1 + 0x78)
            *(arg1 + 0x78) = *rdi_1
            goto label_142a78b22
        case 0x2a78561
            int64_t rax_208 = rdi_1[1]
            int64_t rdx_102 = sx.q(*(r14_1 + (rax_208 << 3)))
            rdi_1[1] = rax_208 + 1
            int64_t r8_37 = sx.q(*(r14_1 + ((rax_208 + 1) << 3)))
            rdi_1[1] = rax_208 + 2
            rbx_28 = *(arg1 + 0xc0) + (zx.q((rbp_2 + 2).d) << 3)
            int64_t rcx_159 = *rbx_28
            int64_t rcx_161
            
            if (rcx_159 s>= 0)
                if (rcx_159 == 0)
                    *rbx_28 = -1
                label_142a78618:
                    int64_t rdx_103 = sx.q(*(arg1 + 0x38))
                    void* r8_40 = *(arg1 + 0xb0)
                    int32_t temp8_1 = *(r8_40 + 8)
                    *(r8_40 + 8) -= rdx_103.d
                    int32_t rax_219 = *(r8_40 + 8)
                    
                    if (temp8_1 - rdx_103.d s< 0)
                        rax_219 = 0
                    
                    *(r8_40 + 8) = rax_219
                    rdi_1 = *(r8_40 + 0x18) + ((sx.q(rax_219) - rdx_103) << 3)
                    goto label_142a78653
                
                rcx_161 = rcx_159 - 1
                *rbx_28 = rcx_161
                
                if ((zx.d(*(r13_1 + (rcx_161 << 1))) & 0xfffffc00) == 0xdc00 && rcx_161 s> 0
                        && (zx.d(*(r13_1 + (rcx_161 << 1) - 2)) & 0xfffffc00) == 0xd800)
                    goto label_142a785f7
            else
                rcx_161 = *rdi_1 - rdx_102
                *rbx_28 = rcx_161
                
                if (rcx_161 s<= 0 || rcx_161 s>= *(arg1 + 0x30)
                        || (zx.d(*(r13_1 + (rcx_161 << 1))) & 0xfffffc00) != 0xdc00
                        || (zx.d(*(r13_1 + (rcx_161 << 1) - 2)) & 0xfffffc00) != 0xd800)
                    goto label_142a785fa
                
            label_142a785f7:
                *rbx_28 = rcx_161 - 1
        label_142a785fa:
            
            if (*rbx_28 s< 0 || *rbx_28 s< *rdi_1 - r8_37)
                goto label_142a78618
            
            r8_39 = rdi_1[1] - 3
        label_142a78b17:
            rdi_1 = sub_142a78ca0(arg1, rdi_1, r8_39, r12)
            rax = *rbx_28
            goto label_142a78b1d
        case 0x2a7865c
            if (*rdi_1 != *(arg1 + 0x78))
                goto label_142a771d2
            
        label_142a78653:
            *(arg1 + 0x78) = *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 3).d) << 3))
            goto label_142a78b22
        case 0x2a7866a
            int64_t rax_222 = rdi_1[1]
            int64_t rdx_104 = sx.q(*(r14_1 + (rax_222 << 3)))
            rdi_1[1] = rax_222 + 1
            int64_t r9_24 = sx.q(*(r14_1 + ((rax_222 + 1) << 3)))
            rdi_1[1] = rax_222 + 2
            int32_t r8_41 = *(r14_1 + ((rax_222 + 2) << 3))
            rdi_1[1] = rax_222 + 3
            rbx_28 = *(arg1 + 0xc0) + (zx.q((rbp_2 + 2).d) << 3)
            int64_t rcx_169 = *rbx_28
            int64_t rcx_171
            
            if (rcx_169 s>= 0)
                if (rcx_169 == 0)
                    *rbx_28 = -1
                label_142a78741:
                    *(arg1 + 0x78) = *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 3).d) << 3))
                    rdi_1[1] = zx.q(r8_41) & 0xffffff
                    goto label_142a78b22
                
                rcx_171 = rcx_169 - 1
                *rbx_28 = rcx_171
                
                if ((zx.d(*(r13_1 + (rcx_171 << 1))) & 0xfffffc00) == 0xdc00 && rcx_171 s> 0
                        && (zx.d(*(r13_1 + (rcx_171 << 1) - 2)) & 0xfffffc00) == 0xd800)
                    goto label_142a78712
            else
                rcx_171 = *rdi_1 - rdx_104
                *rbx_28 = rcx_171
                
                if (rcx_171 s<= 0 || rcx_171 s>= *(arg1 + 0x30)
                        || (zx.d(*(r13_1 + (rcx_171 << 1))) & 0xfffffc00) != 0xdc00
                        || (zx.d(*(r13_1 + (rcx_171 << 1) - 2)) & 0xfffffc00) != 0xd800)
                    goto label_142a78715
                
            label_142a78712:
                *rbx_28 = rcx_171 - 1
        label_142a78715:
            
            if (*rbx_28 s< 0 || *rbx_28 s< *rdi_1 - r9_24)
                goto label_142a78741
            
            r8_39 = rdi_1[1] - 4
            goto label_142a78b17
        case 0x2a78751
            if (*rdi_1 != *(arg1 + 0x78))
                goto label_142a771d2
            
            int64_t rdx_105 = *(arg1 + 0xc0)
            *(arg1 + 0x78) = *(rdx_105 + (zx.q((rbp_2 + 3).d) << 3))
            sub_142aeb430(*(arg1 + 0xb0), *(rdx_105 + (rbp_2 << 3)))
            rax_22 = sx.q(*(arg1 + 0x38))
            rdx_8 = *(arg1 + 0xb0)
            int32_t temp5_1 = *(rdx_8 + 8)
            *(rdx_8 + 8) -= rax_22.d
            
            if (temp5_1 - rax_22.d s< 0)
                *(rdx_8 + 8) = 0
            
            rcx_22 = sx.q(*(rdx_8 + 8))
            goto label_142a771ec
        case 0x2a7879b
            int64_t r14_6 = (zx.q(rbp_2.d) << 5) + *(*(arg1 + 8) + 0x70)
            uint64_t r15_3 = sub_142ae72d0(rax_3, rbp_2.d)
            int64_t rbx_29 = sx.q(*rdi_1)
            
            if (rbx_29 s>= *(arg1 + 0x78))
            label_142a788c3:
                *(arg1 + 0xa8) = 1
            else
                int16_t* rbp_7 = (rbx_29 << 1) + r13_1
                
                while (true)
                    uint32_t rdx_110 = zx.d(*rbp_7)
                    rbx_29 = zx.q(rbx_29.d + 1)
                    rbp_7 = &rbp_7[1]
                    
                    if ((rdx_110 & 0xfffffc00) == 0xd800 && sx.q(rbx_29.d) != *(arg1 + 0x78))
                        uint32_t rcx_180 = zx.d(*rbp_7)
                        
                        if ((rcx_180 & 0xfffffc00) == 0xdc00)
                            rbx_29 = zx.q(rbx_29.d + 1)
                            rbp_7 = &rbp_7[1]
                            rdx_110 = ((rdx_110 - 0xd7f7) << 0xa) + rcx_180
                    
                    if (rdx_110 s>= 0x100)
                        if (sub_142a9f280(r15_3, rdx_110) == 0)
                            rbx_29 = zx.q(rbx_29.d - 1)
                            
                            if ((zx.d(*(r13_1 + (sx.q(rbx_29.d) << 1))) & 0xfffffc00) == 0xdc00
                                    && rbx_29.d s> 0)
                                int32_t rdx_112 = (rbx_29 - 1).d
                                
                                if ((zx.d(*(r13_1 + (sx.q(rdx_112) << 1))) & 0xfffffc00) == 0xd800)
                                    rbx_29 = zx.q(rdx_112)
                            
                            break
                    else if (not(test_bit(sx.d(*((sx.q(rdx_110) s>> 3) + r14_6)), rdx_110 & 7)))
                        rbx_29 = zx.q(rbx_29.d - 1)
                        
                        if ((zx.d(*(r13_1 + (sx.q(rbx_29.d) << 1))) & 0xfffffc00) == 0xdc00
                                && rbx_29.d s> 0)
                            int32_t rdx_111 = (rbx_29 - 1).d
                            
                            if ((zx.d(*(r13_1 + (sx.q(rdx_111) << 1))) & 0xfffffc00) == 0xd800)
                                rbx_29 = zx.q(rdx_111)
                        
                        break
                    
                    if (sx.q(rbx_29.d) s>= *(arg1 + 0x78))
                        goto label_142a788c3
            
            int64_t rdx_113 = *rdi_1
            int64_t r8_44 = sx.q(rbx_29.d)
            r14_1 = var_d8_1
            
            if (r8_44 != rdx_113)
                rdi_1[(zx.q(*(r14_1 + (rdi_1[1] << 3))) & 0xffffff) + 2] = rdx_113
                *rdi_1 = r8_44
                rax = sub_142a78ca0(arg1, rdi_1, rdi_1[1], r12)
                rdi_1 = rax
                *(rax + 8) += 1
            else
                rdi_1[1] += 1
            
            goto label_142a78b22
        case 0x2a78917
            uint64_t r8_46
            
            if ((rbp_2.b & 1) == 0)
                r8_46 = sx.q(*rdi_1)
                int64_t r10_8 = *(arg1 + 0x78)
                
                if (r8_46 s>= r10_8)
                label_142a789f0:
                    *(arg1 + 0xa8) = 1
                else
                    int16_t* rdx_116 = (r8_46 << 1) + r13_1
                    
                    while (true)
                        uint32_t rcx_197 = zx.d(*rdx_116)
                        r8_46 = zx.q(r8_46.d + 1)
                        rdx_116 = &rdx_116[1]
                        
                        if ((rcx_197 & 0xfffffc00) == 0xd800 && sx.q(r8_46.d) != *(arg1 + 0x78))
                            uint32_t r9_26 = zx.d(*rdx_116)
                            
                            if ((r9_26 & 0xfffffc00) == 0xdc00)
                                r8_46 = zx.q(r8_46.d + 1)
                                rdx_116 = &rdx_116[1]
                                rcx_197 = ((rcx_197 - 0xd7f7) << 0xa) + r9_26
                        
                        if ((rcx_197.b & 0x7f) u<= 0x29)
                            if (rcx_197 == 0xa)
                            label_142a789b2:
                                r8_46 = zx.q(r8_46.d - 1)
                                
                                if ((zx.d(*(r13_1 + (sx.q(r8_46.d) << 1))) & 0xfffffc00) == 0xdc00
                                        && r8_46.d s> 0)
                                    int32_t rdx_117 = (r8_46 - 1).d
                                    
                                    if ((zx.d(*(r13_1 + (sx.q(rdx_117) << 1))) & 0xfffffc00)
                                            == 0xd800)
                                        r8_46 = zx.q(rdx_117)
                                
                                break
                            
                            if ((rbp_2.b & 2) == 0 && sub_142a7b5d0(rcx_197) != 0)
                                goto label_142a789b2
                        
                        if (sx.q(r8_46.d) s>= r10_8)
                            goto label_142a789f0_1
            else
                r8_46 = zx.q(*(arg1 + 0x78))
            label_142a789f0_1:
                *(arg1 + 0xa8) = 1
            
            int64_t rdx_118 = *rdi_1
            int64_t r9_27 = sx.q(r8_46.d)
            
            if (r9_27 != rdx_118)
                rdi_1[(zx.q(*(r14_1 + (rdi_1[1] << 3))) & 0xffffff) + 2] = rdx_118
                *rdi_1 = r9_27
                rax = sub_142a78ca0(arg1, rdi_1, rdi_1[1], r12)
                rdi_1 = rax
                *(rax + 8) += 1
            else
                rdi_1[1] += 1
            
            goto label_142a78b22
        case 0x2a78a3f
            int64_t rcx_205 = *rdi_1
            int64_t r9_29 = sx.q(rdi_1[rbp_2 + 2].d)
            
            if (r9_29 == rcx_205)
                goto label_142a78b22
            
            *rdi_1 = rcx_205 - 1
            uint32_t rdx_120 = zx.d(*(r13_1 + ((rcx_205 - 1) << 1)))
            
            if ((rdx_120 & 0xfffffc00) == 0xdc00 && rcx_205 - 1 s> 0)
                uint32_t r8_48 = zx.d(*(r13_1 + ((rcx_205 - 1) << 1) - 2))
                
                if ((r8_48 & 0xfffffc00) == 0xd800)
                    *rdi_1 = rcx_205 - 2
                    rdx_120 += (r8_48 - 0xd7f7) << 0xa
            
            if (rdx_120 == 0xa)
                int64_t rdx_121 = *rdi_1
                
                if (rdx_121 s> r9_29 && *(r13_1 + (rdx_121 << 1) - 2) == 0xd
                        && (*(r14_1 + (rdi_1[1] << 3) - 0x10) & 0xff000000) == 0x34000000)
                    *rdi_1 = rdx_121 - 1
                    
                    if ((zx.d(*(r13_1 + ((rdx_121 - 1) << 1))) & 0xfffffc00) == 0xdc00
                            && rdx_121 - 1 s> 0
                            && (zx.d(*(r13_1 + ((rdx_121 - 1) << 1) - 2)) & 0xfffffc00) == 0xd800)
                        *rdi_1 = rdx_121 - 2
            
            r8_3 = rdi_1[1] - 1
            goto label_142a77170
        case 0x2a78b22
            goto label_142a78b22
        case 0x2a78b58
        label_142a78b58:
            rax.b = 0
        label_142a78b5a:
            *(arg1 + 0x82) = rax.b
            
            if (rax.b != 0)
                *(arg1 + 0x98) = *(arg1 + 0x90)
                *(arg1 + 0x88) = rbx
                *(arg1 + 0x90) = *rdi_1
            
            *(arg1 + 0xb8) = rdi_1
            break
            break
        case 0x2a78b91
            goto label_142a78b91
    
label_142a77393:
    
    if (cond:7_1)
        goto label_142a78b22
    
    goto label_142a771d2

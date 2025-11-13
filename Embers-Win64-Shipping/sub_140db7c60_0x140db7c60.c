// 函数: sub_140db7c60
// 地址: 0x140db7c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143e20d28
void* r15 = arg1
int32_t rbx = 0
int32_t arg_18 = 0
char rbp = 0
sub_140b34200("InvalidationProcessing", rax)
void* rsi = r15 + 0x1c0
*(rsi + 0x198) = 0

if (*(rsi + 0x19c) != 0)
    sub_140dbd1e0(rsi, 0)

char arg_10 = 0

if (*(r15 + 0x381) != 0)
    arg_10 = 1
else
    int64_t* i_1
    
    if (*(r15 + 0x380) != 0)
        int32_t rdx_1 = *(r15 + 0x1b8)
        int64_t* i = nullptr
        i_1 = nullptr
        int32_t rdi_1 = 0
        int64_t* var_50_1 = nullptr
        
        if (rdx_1 s> 0)
            sub_140dbd340(&i_1, rdx_1)
            rdi_1 = var_50_1.d
            i = i_1
        
        void* r13_1 = r15 + 0x20
        int64_t r15_1 = 0
        void* rax_1 = *(r13_1 + 0x190)
        void* rsi_1 = r13_1
        
        if (rax_1 != 0)
            rsi_1 = rax_1
        
        int64_t r12_1 = sx.q(*(r13_1 + 0x198)) << 2
        uint64_t r12_2 = r12_1 u>> 2
        
        if (rsi_1 u> rsi_1 + r12_1)
            r12_2 = 0
        
        if (r12_2 != 0)
            void* rax_4 = arg1
            
            do
                int64_t* rbx_3 = (sx.q(*rsi_1) << 5) + *(rax_4 + 0x10)
                int64_t r8_1 = *rbx_3
                
                if (r8_1 != 0)
                    int64_t rbp_1 = sx.q(rdi_1)
                    rdi_1 = (rbp_1 + 1).d
                    var_50_1.d = rdi_1
                    
                    if (rdi_1 s> var_50_1:4.d)
                        sub_140dbcc30(&i_1, rbp_1.d)
                        r8_1 = *rbx_3
                        rdi_1 = var_50_1.d
                        i = i_1
                    
                    char rcx_3 = rbx_3[3].b
                    int64_t rdx_4 = rbp_1 * 2
                    i[rdx_4 + 1].b = *(rbx_3 + 0x19)
                    rax_4 = arg1
                    i[rdx_4] = r8_1
                    *(&i[rdx_4] + 9) = rcx_3
                
                rsi_1 += 4
                r15_1 += 1
            while (r15_1 != r12_2)
            
            rbp = 0
        
        r15 = arg1
        void* rbx_4 = r15 + 0x368
        int64_t* rcx_4 = *rbx_4
        
        if ((*(*rcx_4 + 0x208))(rcx_4) == 0)
            int64_t* rcx_5 = *rbx_4
            int64_t* rax_9 = (*(*rcx_5 + 0x190))(rcx_5)
            rbp = 1
            rbx_4 = (*(*rax_9 + 0x10))(rax_9, &i_1, 0)
        
        int64_t* rsi_2 = *rbx_4
        
        if ((rbp & 1) != 0 && var_50_1 != 0)
            var_50_1[1].d -= 1
            
            if (var_50_1[1].d == 1)
                (**var_50_1)(var_50_1)
                int32_t temp1_1 = *(var_50_1 + 0xc)
                *(var_50_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_50_1 + 8))(var_50_1, 1)
        
        sub_140d9a8b0(r15, rsi_2)
        
        for (; i != &i[sx.q(rdi_1) * 2]; i = &i[2])
            void* rcx_10 = *i
            void* rdx_7 = *(rcx_10 + 0x18)
            int32_t rax_15
            
            if (rdx_7 != 0 && *(rdx_7 + 0x378) == *(rcx_10 + 0x24))
                rax_15 = *(rcx_10 + 0x20)
            
            if (rdx_7 == 0 || *(rdx_7 + 0x378) != *(rcx_10 + 0x24) || rax_15 == 0xffffffff)
                rax_15 = -1
            
            void* rcx_11 = r13_1
            void* rdi_4 = (sx.q(rax_15) << 5) + *(r15 + 0x10)
            char r8_2 = *(rdi_4 + 0x1b)
            *(rdi_4 + 0x19) = i[1].b
            r8_2 |= 2
            char rax_17 = *(i + 9)
            *(rdi_4 + 0x1b) = r8_2
            *(rdi_4 + 0x18) = rax_17
            void* rax_18 = *(r13_1 + 0x190)
            
            if (rax_18 != 0)
                rcx_11 = rax_18
            
            void* rdx_8 = rcx_11 + (sx.q(*(r13_1 + 0x198)) << 2)
            
            if (rcx_11 == rdx_8)
            label_140db7ef4:
                *(rdi_4 + 0x1b) = r8_2
                int64_t rbx_6 = sx.q(*(r13_1 + 0x198))
                int32_t rax_21 = (rbx_6 + 1).d
                *(r13_1 + 0x198) = rax_21
                
                if (rax_21 s> *(r13_1 + 0x19c))
                    sub_140dbc540(r13_1, rbx_6.d)
                
                void* rax_22 = *(r13_1 + 0x190)
                void* rdx_10 = r13_1
                void* r10_1 = r13_1
                
                if (rax_22 != 0)
                    rdx_10 = rax_22
                
                *(rdx_10 + (rbx_6 << 2)) = *(rdi_4 + 8)
                void* rax_24 = *(r13_1 + 0x190)
                int32_t j_1 = *(r13_1 + 0x198) - 1
                
                if (rax_24 != 0)
                    r10_1 = rax_24
                
                if (j_1 s> 0)
                    int32_t j
                    
                    do
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(j_1 - 1)
                        j = (temp3_1 - temp2_1) s>> 1
                        void* rdx_12 = r10_1 + (sx.q(j) << 2)
                        int64_t j_2 = sx.q(j_1)
                        int32_t r8_4 = *rdx_12
                        int32_t r9_1 = *(r10_1 + (j_2 << 2))
                        
                        if (r8_4 s>= r9_1)
                            break
                        
                        *(r10_1 + (j_2 << 2)) = r8_4
                        j_1 = j
                        *rdx_12 = r9_1
                    while (j s> 0)
            else
                while (*rcx_11 != *(rdi_4 + 8))
                    rcx_11 += 4
                    
                    if (rcx_11 == rdx_8)
                        goto label_140db7ef4
        
        *(r15 + 0x380) = 0
        rsi = r15 + 0x1c0
        rbx = 0
    
    sub_140b43e30("Invalidate/InitialWidgets", data_143e20d28, *(r15 + 0x1b8), 0)
    int32_t rdi_5 = 0
    int32_t r14_1 = 0
    void* arg_8
    arg_8.d = 0
    int32_t r12_3 = 0
    int32_t r13_2 = 0
    
    if (*(r15 + 0x1b8) != 0)
        while (*(r15 + 0x381) == 0)
            void* rax_28 = *(r15 + 0x1b0)
            void* rcx_14 = r15 + 0x20
            int32_t r11_1 = *(r15 + 0x1b8)
            
            if (rax_28 != 0)
                rcx_14 = rax_28
            
            int32_t rax_29 = r11_1 - 1
            int64_t rdi_7 = sx.q(*rcx_14)
            
            if (rax_29 s>= 1)
                rax_29 = 1
            
            if (rax_29 != 0)
                memcpy(rcx_14, rcx_14 + (sx.q(r11_1 - rax_29) << 2), rax_29 << 2)
                r11_1 = *(r15 + 0x1b8)
            
            void* r9_2 = r15 + 0x20
            int32_t r10_2 = 0
            *(r15 + 0x1b8) = r11_1 - 1
            void* rax_31 = *(r15 + 0x1b0)
            
            if (rax_31 != 0)
                r9_2 = rax_31
            
            if (r11_1 - 1 s> 1)
                uint64_t rax_32
                
                do
                    int32_t r8_8 = r10_2 * 2
                    rax_32 = zx.q(r8_8 + 1)
                    
                    if ((rax_32 + 1).d s< r11_1 - 1)
                        if (*(r9_2 + (sx.q(r8_8) << 2) + 8) s< *(r9_2 + (sx.q(rax_32.d) << 2)))
                            rax_32 = zx.q(r8_8)
                        
                        rax_32 = zx.q(rax_32.d + 1)
                    
                    void* rdx_16 = r9_2 + (sx.q(rax_32.d) << 2)
                    int64_t rcx_19 = sx.q(r10_2)
                    int32_t r10_3 = *rdx_16
                    int32_t r8_9 = *(r9_2 + (rcx_19 << 2))
                    
                    if (r8_9 s>= r10_3)
                        break
                    
                    *(r9_2 + (rcx_19 << 2)) = r10_3
                    r10_2 = rax_32.d
                    *rdx_16 = r8_9
                while (((rax_32 << 1) + 1).d s< r11_1 - 1)
            
            int64_t rbx_7 = sx.q(*(rsi + 0x198))
            int32_t rax_34 = (rbx_7 + 1).d
            *(rsi + 0x198) = rax_34
            
            if (rax_34 s> *(rsi + 0x19c))
                sub_140dbc540(rsi, rbx_7.d)
            
            void* rax_35 = *(rsi + 0x190)
            void* rcx_21 = rsi
            
            if (rax_35 != 0)
                rcx_21 = rax_35
            
            *(rcx_21 + (rbx_7 << 2)) = rdi_7.d
            int64_t* rdi_9 = (rdi_7 << 5) + *(r15 + 0x10)
            *(rdi_9 + 0x1b) &= 0xfc
            int64_t* rcx_22 = *rdi_9
            
            if (rcx_22 == 0)
                rbx = arg_8.d
            else
                if (data_143e24360 == 0 && (*(*(r15 + 0x368) + 0x29) & 2) == 0
                        && (*(*rcx_22 + 0x210))() != 0)
                    *(rdi_9 + 0x19) |= 1
                
                int32_t rbx_8 = *(r15 + 0x1b8)
                arg_10 |= sub_140db8300(rdi_9, r15 + 0x20, r15 + 0x10, r15)
                
                if (*(r15 + 0x1b8) - rbx_8 s>= data_1439ae4fc)
                    int64_t* rax_42 = sub_140e17fc0(&i_1, *rdi_9)
                    int16_t* const r8_11
                    
                    if (rax_42[1].d == 0)
                        r8_11 = &data_142d40450
                    else
                        r8_11 = *rax_42
                    
                    sub_140b44040(data_143e20d28, u"%s", r8_11)
                    int64_t* i_2 = i_1
                    
                    if (i_2 != 0)
                        sub_140a74f90(i_2)
                
                int32_t rax_43 = r14_1 + 1
                
                if ((rdi_9[3].b & 0x10) == 0)
                    rax_43 = r14_1
                
                r14_1 = rax_43
                
                if ((rdi_9[3].b & 0x40) != 0)
                    int64_t* rcx_26 = *rdi_9
                    
                    if ((*(*rcx_26 + 0x210))(rcx_26) == 0)
                        r12_3 += 1
                
                int32_t rax_46 = r13_2 + 1
                rbx = arg_8.d
                
                if ((rdi_9[3].b & 4) == 0)
                    rax_46 = r13_2
                
                r13_2 = rax_46
                
                if ((rdi_9[3].b & 8) != 0)
                    rbx += 1
                    arg_8.d = rbx
            
            rsi = r15 + 0x1c0
            rdi_5 += 1
            
            if (*(r15 + 0x1b8) == 0)
                break
    
    int32_t rax_47 = *(r15 + 0x1bc)
    *(r15 + 0x1b8) = 0
    
    if (rax_47 s< 0 && rax_47 != 0)
        sub_140dbd1e0(r15 + 0x20, 0)
    
    sub_140b43e30("Invalidate/TotalWidgets", data_143e20d28, rdi_5, 0)
    sub_140b43e30("Invalidate/NeedsRepaint", data_143e20d28, r14_1, 0)
    sub_140b43e30("Invalidate/NeedsVolatilePaint", data_143e20d28, r12_3, 0)
    sub_140b43e30("Invalidate/NeedsTick", data_143e20d28, r13_2, 0)
    sub_140b43e30("Invalidate/NeedsActiveTimerUpdate", data_143e20d28, rbx, 0)

sub_140b38680("InvalidationProcessing", rax)
return zx.q(arg_10)

// 函数: sub_141e28cd0
// 地址: 0x141e28cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x10].b != 0)
    return 

bool r8 = sub_140b5b8a0(*arg1, 0).b == 0
int64_t rax
rax.b = arg1[1] != 0
rax.b |= r8

if (rax.b == 0)
    *(arg1 + 0x18) = 0
else if (*(arg1 + 0x18) == 0)
    *(arg1 + 0x18) = sub_140d1fd20(arg2, *arg1)

int64_t* r14_1 = *(arg1 + 8)
void* r12_3 = &r14_1[sx.q(arg1[4]) * 0x10]

if (r14_1 != r12_3)
    void* rdi
    void* var_18_1 = rdi
    
    do
        if (sub_141e10180(&r14_1[8]) != 0)
            void* rax_2 = sub_140cdb8f0(*(arg2 + 0x10), *r14_1)
            r14_1[8] = rax_2
            sub_140cbad20(&r14_1[8], rax_2)
        
        sub_140cea340()
        void* rax_4
        bool rcx_6
        
        if (r14_1[8] == 0)
            rcx_6 = true
            rax_4 = nullptr
        else
            bool cond:2_1 = sub_140d3e110(&r14_1[9]) == 0
            rax_4 = r14_1[8]
            rcx_6 = cond:2_1
        
        if (rcx_6 == 0 || r14_1[0xb].d == 0)
            goto label_141e28de3
        
        rax_4 = sub_140cd0630(&r14_1[8], nullptr, 0)
        
        if (rax_4 == 0 || (data_143e1b828 & *(*(rax_4 + 8) + 0x10)) == 0)
            if (r14_1[8] == 0)
                goto label_141e28e02
            
            r14_1[9].d = 0xffffffff
            *(r14_1 + 0x4c) = 0
            r14_1[8] = 0
        label_141e28e02:
            char rax_6 = sub_140b5b8a0(r14_1[1].d, 0)
            int32_t rbx_1 = *(r14_1 + 0xc)
            rdi.b = rax_6 == 0
            sub_140cea340()
            void* r8_1
            bool rax_7
            
            if ((rbx_1 != 0 | rdi.b) == 0)
                if (r14_1[8] == 0)
                    rax_7 = true
                    r8_1 = nullptr
                else
                    rax_7 = sub_140d3e110(&r14_1[9])
                    r8_1 = r14_1[8]
                    rax_7 = rax_7 == 0
                
                if (rax_7 != 0 && r14_1[0xb].d != 0)
                    void* rax_15 = sub_140cd0630(&r14_1[8], nullptr, 0)
                    r8_1 = rax_15
                    
                    if (rax_15 == 0 || (data_143e1b828 & *(*(rax_15 + 8) + 0x10)) == 0)
                        r8_1 = r14_1[8]
                        
                        if (r8_1 != 0)
                            r14_1[9].d = 0xffffffff
                            *(r14_1 + 0x4c) = 0
                            r8_1 = nullptr
                            r14_1[8] = 0
                    else
                        r14_1[8] = rax_15
            else
                void* rdi_1
                
                if (r14_1[8] == 0)
                    rax_7 = true
                    rdi_1 = nullptr
                else
                    rax_7 = sub_140d3e110(&r14_1[9])
                    rdi_1 = r14_1[8]
                    rax_7 = rax_7 == 0
                
                if (rax_7 != 0 && r14_1[0xb].d != 0)
                    void* rax_9 = sub_140cd0630(&r14_1[8], nullptr, 0)
                    rdi_1 = rax_9
                    
                    if (rax_9 == 0 || (data_143e1b828 & *(*(rax_9 + 8) + 0x10)) == 0)
                        rdi_1 = r14_1[8]
                        
                        if (rdi_1 != 0)
                            r14_1[9].d = 0xffffffff
                            *(r14_1 + 0x4c) = 0
                            rdi_1 = nullptr
                            r14_1[8] = 0
                    else
                        r14_1[8] = rdi_1
                
                if (sub_141e10180(&r14_1[0xc]) != 0)
                    void* rax_12 = sub_140cdb8f0(*(rdi_1 + 0x78), r14_1[1])
                    r14_1[0xc] = rax_12
                    sub_140cbad20(&r14_1[0xc], rax_12)
                
                sub_140cea340()
                bool rcx_20
                
                if (r14_1[0xc] == 0)
                    rcx_20 = true
                    r8_1 = nullptr
                else
                    char rax_13 = sub_140d3e110(&r14_1[0xd])
                    r8_1 = r14_1[0xc]
                    rcx_20 = rax_13 == 0
                
                if (rcx_20 != 0 && r14_1[0xf].d != 0)
                    void* rax_14 = sub_140cd0630(&r14_1[0xc], nullptr, 0)
                    r8_1 = rax_14
                    
                    if (rax_14 == 0 || (data_143e1b828 & *(*(rax_14 + 8) + 0x10)) == 0)
                        r8_1 = r14_1[0xc]
                        
                        if (r8_1 != 0)
                            r14_1[0xd].d = 0xffffffff
                            r8_1 = nullptr
                            *(r14_1 + 0x6c) = 0
                            r14_1[0xc] = 0
                    else
                        r14_1[0xc] = rax_14
            *(r14_1 + 0x3c) = *(r8_1 + 0x3c) * *(r8_1 + 0x38)
        else
            r14_1[8] = rax_4
        label_141e28de3:
            
            if (rax_4 == 0 || ((zx.q(*(*(rax_4 + 8) + 0x10)) u>> 0x15).b & 1) == 0)
                goto label_141e28e02
        
        sub_140cea340()
        void* rax_19
        bool rcx_27
        
        if (r14_1[3] == 0)
            rcx_27 = true
            rax_19 = nullptr
        else
            bool cond:5_1 = sub_140d3e110(&r14_1[4]) == 0
            rax_19 = r14_1[3]
            rcx_27 = cond:5_1
        
        if (rcx_27 == 0 || r14_1[6].d == 0)
            goto label_141e2903e
        
        rax_19 = sub_140cd0630(&r14_1[3], nullptr, 0)
        
        if (rax_19 == 0 || (data_143e1b828 & *(*(rax_19 + 8) + 0x10)) == 0)
            if (r14_1[3] == 0)
                goto label_141e2905d
            
            r14_1[4].d = 0xffffffff
            *(r14_1 + 0x24) = 0
            r14_1[3] = 0
        label_141e2905d:
            
            if (sub_141e10220(&r14_1[3]).b != 0)
                if (*(r14_1 + 0x14) != 0)
                    sub_140cea340()
                    void* rax_21
                    bool rcx_33
                    
                    if (r14_1[3] == 0)
                        rcx_33 = true
                        rax_21 = nullptr
                    else
                        bool cond:10_1 = sub_140d3e110(&r14_1[4]) == 0
                        rax_21 = r14_1[3]
                        rcx_33 = cond:10_1
                    
                    if (rcx_33 != 0 && r14_1[6].d != 0)
                        rax_21 = sub_140cd0630(&r14_1[3], nullptr, 0)
                        
                        if (rax_21 == 0 || (data_143e1b828 & *(*(rax_21 + 8) + 0x10)) == 0)
                            rax_21 = r14_1[3]
                            
                            if (rax_21 != 0)
                                r14_1[4].d = 0xffffffff
                                rax_21 = nullptr
                                *(r14_1 + 0x24) = 0
                                r14_1[3] = 0
                        else
                            r14_1[3] = rax_21
                    
                    int64_t rax_25
                    
                    if (sub_140cc16a0(rax_21 + 0x10, sub_140d41340()) == 0)
                        rax_25 = 0
                    else
                        rax_25 = *(rax_21 + 0x10)
                    
                    if (rax_25 != *(arg2 + 0x10))
                        sub_140cea340()
                        void* rax_27
                        bool rcx_38
                        
                        if (r14_1[3] == 0)
                            rcx_38 = true
                            rax_27 = nullptr
                        else
                            bool cond:14_1 = sub_140d3e110(&r14_1[4]) == 0
                            rax_27 = r14_1[3]
                            rcx_38 = cond:14_1
                        
                        if (rcx_38 == 0 || r14_1[6].d == 0)
                            goto label_141e29188
                        
                        rax_27 = sub_140cd0630(&r14_1[3], nullptr, 0)
                        int64_t rdx_15
                        
                        if (rax_27 != 0 && (data_143e1b828 & *(*(rax_27 + 8) + 0x10)) != 0)
                            r14_1[3] = rax_27
                        label_141e29188:
                            
                            if (rax_27 == 0)
                                rdx_15 = 0
                            else
                                rdx_15 = *(rax_27 + 0x28)
                                int64_t arg_8 = rdx_15
                        else if (r14_1[3] == 0)
                            rdx_15 = 0
                        else
                            r14_1[4].d = 0xffffffff
                            *(r14_1 + 0x24) = 0
                            r14_1[3] = 0
                            rdx_15 = 0
                        
                        void* rax_29 = sub_140cdb8f0(*(arg2 + 0x10), rdx_15)
                        r14_1[3] = rax_29
                        sub_140cbad20(&r14_1[3], rax_29)
                
                sub_140cea340()
                void* rax_31
                bool rcx_45
                
                if (r14_1[3] == 0)
                    rcx_45 = true
                    rax_31 = nullptr
                else
                    bool cond:9_1 = sub_140d3e110(&r14_1[4]) == 0
                    rax_31 = r14_1[3]
                    rcx_45 = cond:9_1
                
                if (rcx_45 == 0 || r14_1[6].d == 0)
                    goto label_141e29230
                
                rax_31 = sub_140cd0630(&r14_1[3], nullptr, 0)
                
                if (rax_31 == 0 || (data_143e1b828 & *(*(rax_31 + 8) + 0x10)) == 0)
                    if (r14_1[3] == 0)
                        goto label_141e29268
                    
                    r14_1[4].d = 0xffffffff
                    *(r14_1 + 0x24) = 0
                    r14_1[3] = 0
                label_141e29268:
                    sub_140cea340()
                    void* rax_34
                    bool rcx_51
                    
                    if (r14_1[3] == 0)
                        rcx_51 = true
                        rax_34 = nullptr
                    else
                        bool cond:12_1 = sub_140d3e110(&r14_1[4]) == 0
                        rax_34 = r14_1[3]
                        rcx_51 = cond:12_1
                    
                    if (rcx_51 == 0 || r14_1[6].d == 0)
                        goto label_141e292c0
                    
                    rax_34 = sub_140cd0630(&r14_1[3], nullptr, 0)
                    
                    if (rax_34 == 0 || (data_143e1b828 & *(*(rax_34 + 8) + 0x10)) == 0)
                        if (r14_1[3] == 0)
                            goto label_141e292f8
                        
                        r14_1[4].d = 0xffffffff
                        *(r14_1 + 0x24) = 0
                        r14_1[3] = 0
                    label_141e292f8:
                        sub_140cea340()
                        void* rax_37
                        bool rcx_57
                        
                        if (r14_1[3] == 0)
                            rcx_57 = true
                            rax_37 = nullptr
                        else
                            bool cond:16_1 = sub_140d3e110(&r14_1[4]) == 0
                            rax_37 = r14_1[3]
                            rcx_57 = cond:16_1
                        
                        if (rcx_57 == 0 || r14_1[6].d == 0)
                            goto label_141e29350
                        
                        rax_37 = sub_140cd0630(&r14_1[3], nullptr, 0)
                        
                        if (rax_37 == 0 || (data_143e1b828 & *(*(rax_37 + 8) + 0x10)) == 0)
                            if (r14_1[3] == 0)
                                goto label_141e29388
                            
                            r14_1[4].d = 0xffffffff
                            *(r14_1 + 0x24) = 0
                            r14_1[3] = 0
                        label_141e29388:
                            rax = sub_140cea340()
                            bool rcx_63
                            int64_t r8_2
                            
                            if (r14_1[3] == 0)
                                rcx_63 = true
                                r8_2 = 0
                            else
                                rax = sub_140d3e110(&r14_1[4])
                                r8_2 = r14_1[3]
                                rcx_63 = rax.b == 0
                            
                            if (rcx_63 == 0 || r14_1[6].d == 0)
                                goto label_141e293e3
                            
                            rax = sub_140cd0630(&r14_1[3], nullptr, 0)
                            r8_2 = rax
                            
                            if (rax != 0 && (data_143e1b828 & *(*(rax + 8) + 0x10)) != 0)
                                r14_1[3] = rax
                            label_141e293e3:
                                
                                if (r8_2 == 0)
                                    r8_2 = 0
                                else
                                    rax = *(r8_2 + 8)
                                    
                                    if (((zx.q(*(rax + 0x10)) u>> 0x1a).b & 1) == 0)
                                        r8_2 = 0
                            else if (r14_1[3] == 0)
                                r8_2 = 0
                            else
                                r14_1[4].d = 0xffffffff
                                *(r14_1 + 0x24) = 0
                                r14_1[3] = 0
                                r8_2 = 0
                            
                            rax.b = sbb.b(rax.b, rax.b, r8_2 != 0)
                            rax.b &= 3
                            *(r14_1 + 0x16) = rax.b
                        else
                            r14_1[3] = rax_37
                        label_141e29350:
                            
                            if (rax_37 == 0
                                    || ((zx.q(*(*(rax_37 + 8) + 0x10)) u>> 0x14).b & 1) == 0)
                                goto label_141e29388
                            
                            *(r14_1 + 0x16) = 2
                    else
                        r14_1[3] = rax_34
                    label_141e292c0:
                        
                        if (rax_34 == 0 || ((zx.q(*(*(rax_34 + 8) + 0x10)) u>> 0x11).b & 1) == 0)
                            goto label_141e292f8
                        
                        *(r14_1 + 0x16) = 1
                else
                    r14_1[3] = rax_31
                label_141e29230:
                    
                    if (rax_31 == 0 || ((zx.q(*(*(rax_31 + 8) + 0x10)) u>> 0xd).b & 1) == 0)
                        goto label_141e29268
                    
                    *(r14_1 + 0x16) = 4
        else
            r14_1[3] = rax_19
        label_141e2903e:
            
            if (rax_19 == 0 || ((zx.q(*(*(rax_19 + 8) + 0x10)) u>> 0x15).b & 1) == 0)
                goto label_141e2905d
        
        r14_1 -= -0x80
    while (r14_1 != r12_3)

arg1[0x10].b = 1

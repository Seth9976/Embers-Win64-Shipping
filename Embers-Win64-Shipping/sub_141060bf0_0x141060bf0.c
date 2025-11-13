// 函数: sub_141060bf0
// 地址: 0x141060bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5a8
int64_t rax_1 = __security_cookie ^ &var_5a8
int64_t* var_540 = nullptr
int64_t** result = sub_141068ec0(&var_540)

if (var_540 != 0)
    int64_t* r12
    int64_t* var_18_1 = r12
    TEB* gsbase
    int32_t* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    void** r13
    void** var_20_1 = r13
    int32_t* var_548 = rdi_2
    
    if (data_143cd5b60 s> *rdi_2)
        _Init_thread_header(&data_143cd5b60)
        
        if (data_143cd5b60 == 0xffffffff)
            sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
            _Init_thread_footer(&data_143cd5b60)
    
    int64_t rbx_1 = data_143cd5b58
    sub_140a387e0()
    void* r8_1 = data_14399e720
    int32_t rax_4
    int64_t r8_2
    rax_4, r8_2 = (*(r8_1 + 8))(&data_14399e720, rbx_1, r8_1)
    int64_t* var_570
    int32_t var_560
    int64_t r15_2
    
    if (rax_4 s<= 0)
        r15_2 = 0
    else
        if (data_143cd5b60 s> *rdi_2)
            _Init_thread_header(&data_143cd5b60)
            
            if (data_143cd5b60 == 0xffffffff)
                sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                _Init_thread_footer(&data_143cd5b60)
        
        int64_t rbx_2 = data_143cd5b58
        sub_140a387e0()
        var_570 = nullptr
        int32_t var_564_1 = 0
        r12 = nullptr
        void* r8_3 = data_14399e720
        int32_t rdi_3 = 0
        int32_t rax_6 = (*(r8_3 + 8))(&data_14399e720, rbx_2, r8_3)
        var_560 = rax_6
        int32_t rsi_1 = 0
        
        if (rax_6 s> 0)
            do
                void* r9_1 = data_14399e720
                int64_t rax_7 = (*(r9_1 + 0x10))(&data_14399e720, rbx_2, zx.q(rsi_1), r9_1)
                int64_t r15_1 = rax_7 - 8
                
                if (rax_7 == 0)
                    r15_1 = 0
                
                int64_t r14_1 = sx.q(rdi_3)
                rdi_3 = (r14_1 + 1).d
                
                if (rdi_3 s> var_564_1)
                    sub_1405a4d70(&var_570)
                    r12 = var_570
                
                rsi_1 += 1
                r12[r14_1] = r15_1
            while (rsi_1 s< var_560)
        
        char var_578
        sub_1405ea950(r12, rdi_3, var_578)
        int64_t* rbx_3 = *r12
        sub_140a74f90(r12)
        int64_t rax_9
        rax_9, r8_2 = (*(*rbx_3 + 0x60))(rbx_3)
        rdi_2 = var_548
        r15_2 = rax_9
    
    int64_t* rcx_5 = data_143db18d0
    
    if (rcx_5 == 0)
        sub_140a53c40()
        rcx_5 = data_143db18d0
    
    r8_2.b = 1
    int64_t* rax_11 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.GraphicsAdapter", r8_2)
    int32_t* rax_12
    
    if (rax_11 == 0)
        rax_12 = nullptr
    else
        int64_t rdx_7 = *rax_11
        rax_12 = (*(rdx_7 + 0x58))(rax_11, rdx_7)
    
    int32_t rsi_2 = -1
    int32_t rcx_7
    
    if (r15_2 != 0)
        rcx_7 = -2
    else if (rax_12 == 0)
        rcx_7 = -1
    else
        rcx_7 = *rax_12
    
    int32_t var_55c = rcx_7
    sub_140af2b60()
    sub_140b2ab20(&data_143dbb3f0, u"graphicsadapter=", &var_55c)
    bool cond:0_1 = var_55c == 0xffffffff
    int32_t rax_13 = *rdi_2
    int64_t* var_558 = nullptr
    r13.b = 0
    int32_t var_3e8 = 0xffffffff
    r12.b = 0
    int32_t var_3e4_1 = 0
    bool cond:1_1 = data_143e2c7d4 s> rax_13
    int32_t var_2b0_1 = 0
    int32_t var_2a8 = 0xffffffff
    int32_t var_2a4_1 = 0
    int32_t var_170_1 = 0
    
    if (cond:1_1)
        _Init_thread_header(&data_143e2c7d4)
        
        if (data_143e2c7d4 == 0xffffffff)
            sub_140af2b60()
            data_143e2c7d0 = sub_140b21a10(&data_143dbb3f0, u"warp")
            _Init_thread_footer(&data_143e2c7d4)
    
    char rax_14 = data_143e2c7d0
    int512_t zmm1_1 = sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"preferAMD") == 0)
        zmm1_1 = sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"preferIntel") == 0)
            zmm1_1 = sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"preferNvidia") != 0)
                rsi_2 = 0x10de
        else
            rsi_2 = 0x8086
    else
        rsi_2 = 0x1002
    
    int32_t r14_2 = 0
    int32_t var_568
    
    while (true)
        int64_t* rcx_8 = var_558
        int64_t* rbx_4 = var_540
        var_558 = nullptr
        
        if (rcx_8 != 0)
            (*(*rcx_8 + 0x10))(rcx_8)
        
        if ((*(*rbx_4 + 0x38))(rbx_4, zx.q(r14_2), &var_558) == 0x887a0002)
            break
        
        int64_t* rcx_10 = var_558
        
        if (rcx_10 != 0)
            int32_t var_550 = 0
            var_560 = 0
            
            if (sub_141068f00(rcx_10, 0xb000, &var_550, &var_560, zmm1_1) != 0)
                int64_t* rcx_11 = var_558
                void var_168
                int32_t rax_23 = (*(*rcx_11 + 0x40))(rcx_11, &var_168)
                
                if (rax_23 s< 0)
                    var_570 = nullptr
                    int64_t** var_580_1 = &var_570
                    var_568.q = 0
                    sub_14106a020(rax_23, "TempAdapter->GetDesc(&AdapterDesc)", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device."
                    "cpp", 
                        0x14b, nullptr)
                
                int32_t rbx_5 = 0
                int32_t* rcx_14
                
                while (true)
                    int64_t* rcx_13 = var_558
                    var_548 = nullptr
                    int32_t rax_25 = (*(*rcx_13 + 0x38))(rcx_13, zx.q(rbx_5), &var_548)
                    rcx_14 = var_548
                    
                    if (rax_25 s< 0)
                        break
                    
                    rbx_5 += 1
                    
                    if (rcx_14 != 0)
                        (*(*rcx_14 + 0x10))(rcx_14)
                
                if (rcx_14 != 0)
                    (*(*rcx_14 + 0x10))(rcx_14)
                
                r13 = zx.q(r13.b)
                r12 = zx.q(r12.b)
                int32_t var_68
                rcx_14.b = var_68 == 0x10de
                rbx_5.b = var_68 == 0x1414
                
                if (var_68 == 0x1002)
                    r13 = 1
                
                if (rcx_14.b != 0)
                    r12 = 1
                
                bool cond:6_1 = sub_140a54510(&var_168, u"NVIDIA PerfHUD") == 0
                int32_t var_528 = r14_2
                void* rcx_16 = &var_168
                int32_t var_524_1 = var_550
                void var_520
                void* rax_31 = &var_520
                int64_t i_5 = 2
                int128_t zmm0_1
                int64_t i
                
                do
                    rax_31 += 0x80
                    zmm1_1.o = *(rcx_16 + 0x10)
                    *(rax_31 - 0x80) = *rcx_16
                    zmm0_1 = *(rcx_16 + 0x20)
                    *(rax_31 - 0x70) = zmm1_1.o
                    zmm1_1.o = *(rcx_16 + 0x30)
                    *(rax_31 - 0x60) = zmm0_1
                    zmm0_1 = *(rcx_16 + 0x40)
                    *(rax_31 - 0x50) = zmm1_1.o
                    zmm1_1.o = *(rcx_16 + 0x50)
                    *(rax_31 - 0x40) = zmm0_1
                    zmm0_1 = *(rcx_16 + 0x60)
                    *(rax_31 - 0x30) = zmm1_1.o
                    zmm1_1.o = *(rcx_16 + 0x70)
                    rcx_16 -= -0x80
                    *(rax_31 - 0x20) = zmm0_1
                    *(rax_31 - 0x10) = zmm1_1.o
                    i = i_5
                    i_5 -= 1
                while (i != 1)
                zmm1_1.o = *(rcx_16 + 0x10)
                *rax_31 = *rcx_16
                zmm0_1 = *(rcx_16 + 0x20)
                *(rax_31 + 0x10) = zmm1_1.o
                *(rax_31 + 0x20) = zmm0_1
                int32_t var_3f0_1 = var_560
                
                if (rax_14 == i_5.b || rbx_5.b != 0)
                    i_5.b = 0
                else
                    i_5.b = 1
                
                int64_t var_40
                
                if (r15_2 == 0 || r15_2 == var_40)
                    rcx_16.b = 0
                else
                    rcx_16.b = 1
                
                int32_t rax_33 = var_55c
                
                if (rax_33 s< 0 || r14_2 == rax_33)
                    rax_33.b = 0
                else
                    rax_33.b = 1
                
                if (i_5.b == 0 && cond:6_1 == 0 && rcx_16.b == 0 && rax_33.b == 0)
                    int32_t rcx_17 = var_3e8
                    int32_t* rax_34
                    int32_t* rcx_18
                    
                    if (var_68 != 0x8086 && (var_3e4_1 == 0 || rcx_17 s< 0))
                        rax_34 = &var_3e8
                        int64_t i_6 = 2
                        rcx_18 = &var_528
                        int64_t i_1
                        
                        do
                            rax_34 = &rax_34[0x20]
                            zmm0_1 = *rcx_18
                            zmm1_1.o = *(rcx_18 + 0x10)
                            rcx_18 = &rcx_18[0x20]
                            *(rax_34 - 0x80) = zmm0_1
                            zmm0_1 = *(rcx_18 - 0x60)
                            *(rax_34 - 0x70) = zmm1_1.o
                            zmm1_1.o = *(rcx_18 - 0x50)
                            *(rax_34 - 0x60) = zmm0_1
                            zmm0_1 = *(rcx_18 - 0x40)
                            *(rax_34 - 0x50) = zmm1_1.o
                            zmm1_1.o = *(rcx_18 - 0x30)
                            *(rax_34 - 0x40) = zmm0_1
                            zmm0_1 = *(rcx_18 - 0x20)
                            *(rax_34 - 0x30) = zmm1_1.o
                            zmm1_1.o = *(rcx_18 - 0x10)
                            *(rax_34 - 0x20) = zmm0_1
                            *(rax_34 - 0x10) = zmm1_1.o
                            i_1 = i_6
                            i_6 -= 1
                        while (i_1 != 1)
                    label_141061216:
                        zmm1_1.o = *(rcx_18 + 0x10)
                        *rax_34 = *rcx_18
                        zmm0_1 = *(rcx_18 + 0x20)
                        *(rax_34 + 0x10) = zmm1_1.o
                        zmm1_1.o = *(rcx_18 + 0x30)
                        *(rax_34 + 0x20) = zmm0_1
                        *(rax_34 + 0x30) = zmm1_1.o
                    else if (rsi_2 == var_68 && (var_3e8.q u>> 0x20).d != 0 && rcx_17 s>= 0)
                        rax_34 = &var_3e8
                        int64_t i_7 = 2
                        rcx_18 = &var_528
                        int64_t i_2
                        
                        do
                            rax_34 = &rax_34[0x20]
                            zmm0_1 = *rcx_18
                            zmm1_1.o = *(rcx_18 + 0x10)
                            rcx_18 = &rcx_18[0x20]
                            *(rax_34 - 0x80) = zmm0_1
                            zmm0_1 = *(rcx_18 - 0x60)
                            *(rax_34 - 0x70) = zmm1_1.o
                            zmm1_1.o = *(rcx_18 - 0x50)
                            *(rax_34 - 0x60) = zmm0_1
                            zmm0_1 = *(rcx_18 - 0x40)
                            *(rax_34 - 0x50) = zmm1_1.o
                            zmm1_1.o = *(rcx_18 - 0x30)
                            *(rax_34 - 0x40) = zmm0_1
                            zmm0_1 = *(rcx_18 - 0x20)
                            *(rax_34 - 0x30) = zmm1_1.o
                            zmm1_1.o = *(rcx_18 - 0x10)
                            *(rax_34 - 0x20) = zmm0_1
                            *(rax_34 - 0x10) = zmm1_1.o
                            i_2 = i_7
                            i_7 -= 1
                        while (i_2 != 1)
                        goto label_141061216
                    
                    if (var_2a4_1 == 0 || var_2a8 s< 0)
                        int32_t* rcx_20 = &var_2a8
                        int64_t i_9 = 2
                        int32_t* rax_40 = &var_528
                        int64_t i_3
                        
                        do
                            rcx_20 = &rcx_20[0x20]
                            zmm0_1 = *rax_40
                            zmm1_1.o = *(rax_40 + 0x10)
                            rax_40 = &rax_40[0x20]
                            *(rcx_20 - 0x80) = zmm0_1
                            zmm0_1 = *(rax_40 - 0x60)
                            *(rcx_20 - 0x70) = zmm1_1.o
                            zmm1_1.o = *(rax_40 - 0x50)
                            *(rcx_20 - 0x60) = zmm0_1
                            zmm0_1 = *(rax_40 - 0x40)
                            *(rcx_20 - 0x50) = zmm1_1.o
                            zmm1_1.o = *(rax_40 - 0x30)
                            *(rcx_20 - 0x40) = zmm0_1
                            zmm0_1 = *(rax_40 - 0x20)
                            *(rcx_20 - 0x30) = zmm1_1.o
                            zmm1_1.o = *(rax_40 - 0x10)
                            *(rcx_20 - 0x20) = zmm0_1
                            *(rcx_20 - 0x10) = zmm1_1.o
                            i_3 = i_9
                            i_9 -= 1
                        while (i_3 != 1)
                        zmm1_1.o = *(rax_40 + 0x10)
                        *rcx_20 = *rax_40
                        zmm0_1 = *(rax_40 + 0x20)
                        *(rcx_20 + 0x10) = zmm1_1.o
                        zmm1_1.o = *(rax_40 + 0x30)
                        *(rcx_20 + 0x20) = zmm0_1
                        *(rcx_20 + 0x30) = zmm1_1.o
                    else if (rsi_2 == var_68 && (var_2a8.q u>> 0x20).d != 0)
                        int32_t* rax_39 = &var_2a8
                        int64_t i_8 = 2
                        int32_t* rcx_19 = &var_528
                        int64_t i_4
                        
                        do
                            rax_39 = &rax_39[0x20]
                            zmm0_1 = *rcx_19
                            zmm1_1.o = *(rcx_19 + 0x10)
                            rcx_19 = &rcx_19[0x20]
                            *(rax_39 - 0x80) = zmm0_1
                            zmm0_1 = *(rcx_19 - 0x60)
                            *(rax_39 - 0x70) = zmm1_1.o
                            zmm1_1.o = *(rcx_19 - 0x50)
                            *(rax_39 - 0x60) = zmm0_1
                            zmm0_1 = *(rcx_19 - 0x40)
                            *(rax_39 - 0x50) = zmm1_1.o
                            zmm1_1.o = *(rcx_19 - 0x30)
                            *(rax_39 - 0x40) = zmm0_1
                            zmm0_1 = *(rcx_19 - 0x20)
                            *(rax_39 - 0x30) = zmm1_1.o
                            zmm1_1.o = *(rcx_19 - 0x10)
                            *(rax_39 - 0x20) = zmm0_1
                            *(rax_39 - 0x10) = zmm1_1.o
                            i_4 = i_8
                            i_8 -= 1
                        while (i_4 != 1)
                        zmm1_1.o = *(rcx_19 + 0x10)
                        r14_2 += 1
                        *rax_39 = *rcx_19
                        zmm0_1 = *(rcx_19 + 0x20)
                        *(rax_39 + 0x10) = zmm1_1.o
                        zmm1_1.o = *(rcx_19 + 0x30)
                        *(rax_39 + 0x20) = zmm0_1
                        *(rax_39 + 0x30) = zmm1_1.o
                        continue
        
        r14_2 += 1
    
    int64_t* rbx_6
    
    if (cond:0_1 == 0)
    label_1410613dc:
        void*** rax_45 = j_sub_140a82f30(0xa00)
        
        if (rax_45 == 0)
            rbx_6 = nullptr
        else
            rbx_6 = sub_141008d20(rax_45, &var_2a8)
    else
        if (r13.b != 0)
            if ((var_3e8.q u>> 0x20).d == 0 || var_3e8 s< 0)
                goto label_1410613dc
        else if (r12.b == 0 || (var_3e8.q u>> 0x20).d == 0 || var_3e8 s< 0)
            goto label_1410613dc
        
        void*** rax_43 = j_sub_140a82f30(0xa00)
        
        if (rax_43 == 0)
            rbx_6 = nullptr
        else
            rbx_6 = sub_141008d20(rax_43, &var_3e8)
    
    var_570 = rbx_6
    void*** rax_47 = j_sub_140a82f30(0x18)
    
    if (rax_47 == 0)
        rax_47 = nullptr
    else
        rax_47[1].d = 1
        *(rax_47 + 0xc) = 1
        *rax_47 = &data_142d42ea8
        rax_47[2] = rbx_6
    
    var_568.q = rax_47
    int64_t* r14_3 = var_570
    int64_t* rbx_7 = var_568.q
    int64_t rsi_3 = sx.q(*(arg1 + 0x18))
    int32_t rax_48 = (rsi_3 + 1).d
    bool cond:2_1 = rax_48 s<= *(arg1 + 0x1c)
    *(arg1 + 0x18) = rax_48
    
    if (not(cond:2_1))
        sub_1405a4f90(arg1 + 0x10)
    
    result = (rsi_3 << 4) + *(arg1 + 0x10)
    *result = r14_3
    result[1] = rbx_7
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            result = (**rbx_7)(rbx_7)
            int32_t temp1_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* rcx_26 = var_558
    
    if (rcx_26 != 0)
        result = (*(*rcx_26 + 0x10))(rcx_26)
    
    int64_t* rcx_27 = var_540
    
    if (rcx_27 != 0)
        result = (*(*rcx_27 + 0x10))(rcx_27)

__security_check_cookie(rax_1 ^ &var_5a8)
return result

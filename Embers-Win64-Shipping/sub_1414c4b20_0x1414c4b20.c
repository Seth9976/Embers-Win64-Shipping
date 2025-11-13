// 函数: sub_1414c4b20
// 地址: 0x1414c4b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1
void* r13 = arg2
void* var_58
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(r15 + 0x3b0))]), &var_58, 
    &data_143ee8760, 0)
void* rcx_4 = var_58
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143eec980 s> *rdi_1)
    _Init_thread_header(&data_143eec980)
    
    if (data_143eec980 == 0xffffffff)
        sub_140b58260(&data_143eec978, u"TranslucencyLightingVolumeClearEndComputeFence", 1)
        _Init_thread_footer(&data_143eec980)

int64_t* rcx_6 = data_143f0f180
int64_t arg_20
(*(*rcx_6 + 0x98))(rcx_6, &arg_20, &data_143eec978)
void* rcx_7 = r15 + 0x3e8
int32_t i = 0

if (rcx_7 != &arg_20)
    int64_t* rbx_1 = *rcx_7
    *rcx_7 = arg_20
    arg_20 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_7
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_7 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_9 = sub_140a20af0()
                    void* const rax_10
                    
                    if (rax_9 != 0)
                        rax_10 = *((zx.q(rax_9 u>> 0xe) << 3) + &data_143cf0bf8)
                            + (zx.q(rax_9) & 0x3fff) * 0x18
                    else
                        rax_10 = nullptr
                    
                    *(rax_10 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_9)

sub_1405d1550(&arg_20)

if (data_143eec990 s> *rdi_1)
    _Init_thread_header(&data_143eec990)
    
    if (data_143eec990 == 0xffffffff)
        sub_140b58260(&data_143eec988, u"TranslucencyLightingVolumeClearBeginComputeFence", 1)
        _Init_thread_footer(&data_143eec990)

int64_t* rcx_13 = data_143f0f180
int64_t var_88
(*(*rcx_13 + 0x98))(rcx_13, &var_88, &data_143eec988)
uint64_t rax_16 = zx.q(*(r15 + 0xa8))
void* rdi_2 = nullptr
void* var_98 = nullptr
uint64_t rsi = 0
void* var_68 = nullptr
int32_t arg_18 = 0
uint32_t rdx_4 = (rax_16 << 2).d
int32_t var_60 = 0
int32_t var_5c = 0

if (rdx_4 s> 0)
    sub_14083ad10(&var_68, rdx_4)
    rdi_2 = var_68
    rsi = zx.q(var_60)
    rax_16 = zx.q(*(r15 + 0xa8))
    var_98 = rdi_2
    arg_18 = rsi.d

if (rax_16.d s> 0)
    int64_t r14_1 = 0
    
    do
        void* rax_17 = data_143ec4dc0
        int32_t rbx_2 = (rsi + 1).d
        void* rcx_15 = &data_143ec4da8
        
        if (rax_17 != 0)
            rcx_15 = rax_17
        
        arg_18.q = *(*(rcx_15 + r14_1) + 0x18)
        
        if (rbx_2 s> var_5c)
            sub_14083a440(&var_68, rsi.d)
            rdi_2 = var_68
        
        int32_t rsi_1 = rbx_2 + 1
        *(rdi_2 + (sx.q(rsi.d) << 3)) = arg_18.q
        void* rcx_18 = &data_143ec4dd0
        void* rax_21 = data_143ec4de8
        
        if (rax_21 != 0)
            rcx_18 = rax_21
        
        arg_18.q = *(*(rcx_18 + r14_1) + 0x18)
        
        if (rsi_1 s> var_5c)
            sub_14083a440(&var_68, rbx_2)
            rdi_2 = var_68
        
        int32_t rbx_3 = rsi_1 + 1
        *(rdi_2 + (sx.q(rbx_2) << 3)) = arg_18.q
        void* rcx_21 = &data_143ec4da8
        void* rax_25 = data_143ec4dc0
        
        if (rax_25 != 0)
            rcx_21 = rax_25
        
        arg_18.q = *(*(rcx_21 + r14_1 + 8) + 0x18)
        
        if (rbx_3 s> var_5c)
            sub_14083a440(&var_68, rsi_1)
            rdi_2 = var_68
        
        rsi = zx.q(rbx_3 + 1)
        int32_t var_60_4 = rsi.d
        *(rdi_2 + (sx.q(rsi_1) << 3)) = arg_18.q
        void* rcx_24 = &data_143ec4dd0
        void* rax_29 = data_143ec4de8
        
        if (rax_29 != 0)
            rcx_24 = rax_29
        
        arg_18.q = *(*(rcx_24 + r14_1 + 8) + 0x18)
        
        if (rsi.d s> var_5c)
            sub_14083a440(&var_68, rbx_3)
            rsi = zx.q(var_60_4)
            rdi_2 = var_68
        
        i += 1
        r14_1 += 0x18
        *(rdi_2 + (sx.q(rbx_3) << 3)) = arg_18.q
    while (i s< *(arg1 + 0xa8))
    
    r13 = arg2
    r15 = arg1
    arg_18 = rsi.d
    var_98 = rdi_2

uint32_t rdx_9 = (rsi << 3).d
int64_t r12 = sx.q(rdx_9)
int64_t* rbx_6 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
arg_20 = var_88
void* rax_35 = r12 + rbx_6

if (rax_35 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, rdx_9 + 8)
    rbx_6 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_35 = r12 + rbx_6

*(r13 + 0x30) = rax_35
int64_t i_4 = sx.q(rsi.d)

if (rsi.d s> 0)
    int64_t* rcx_28 = rbx_6
    int64_t i_1
    
    do
        *rcx_28 = *(rdi_2 - rbx_6 + rcx_28)
        rcx_28 = &rcx_28[1]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

void*** rcx_31 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_37 = &rcx_31[6]

if (rax_37 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x38)
    rcx_31 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_37 = &rcx_31[6]

*(r13 + 0x30) = rax_37
void**** rax_38 = *(r13 + 8)
*(r13 + 0x14) += 1
*rax_38 = rcx_31
*(r13 + 8) = &rcx_31[1]
rcx_31[1] = 0
rcx_31[5] = arg_20
*rcx_31 = &data_142da7798
rcx_31[2].d = rsi.d
rcx_31[3] = rbx_6
rcx_31[4] = 2
int32_t rcx_35 = data_1439b70ac
int32_t rax_41

if (rcx_35 s>= 4)
    rax_41 = 0x800
    
    if (rcx_35 s< 0x800)
        rax_41 = rcx_35
else
    rax_41 = 4

int32_t i_2 = 0

if (*(r15 + 0xa8) s> 0)
    void* r12_1 = rdi_2 + 0x10
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_41)
    int32_t rax_44 = (temp3_1 + (temp2_1 & 3)) s>> 2
    int32_t r14_2 = rax_44
    arg_20.d = rax_44
    
    do
        int64_t rbx_9 = var_88
        void*** rcx_38 = (data_143f02d90 + 7) & 0xfffffffffffffff8
        
        if (&rcx_38[3] u> data_143f02d98)
            sub_140b0e3d0(&data_143f02d90, 0x20)
            rcx_38 = (data_143f02d90 + 7) & 0xfffffffffffffff8
            data_143f02d90 = &rcx_38[3]
        else
            data_143f02d90 = &rcx_38[3]
        
        int64_t* rax_46 = data_143f02d68
        data_143f02d74 += 1
        *rax_46 = rcx_38
        data_143f02d68 = &rcx_38[1]
        rcx_38[2] = rbx_9
        void* rbx_10 = nullptr
        rcx_38[1] = 0
        *rcx_38 = &data_142f11608
        
        if (rcx_4 != 0)
            int64_t rdx_14 = sx.q(*(rcx_4 + 0x10c))
            void* var_50
            int64_t* r14_3 = *(var_50 + 0x10)
            int64_t* rbx_11 = r14_3[3]
            
            if (rbx_11[rdx_14] == 0)
                sub_1419ccf30(r14_3, rdx_14.d)
                rbx_11 = r14_3[3]
            
            rbx_10 = rbx_11[rdx_14]
            r15 = arg1
            r14_2 = arg_20.d
        
        data_143f02f10 = rbx_10
        sub_14198aa60(rbx_10)
        void*** rcx_45 = (data_143f02d90 + 7) & 0xfffffffffffffff8
        void* rax_49 = &rcx_45[3]
        
        if (rax_49 u> data_143f02d98)
            sub_140b0e3d0(&data_143f02d90, 0x20)
            rcx_45 = (data_143f02d90 + 7) & 0xfffffffffffffff8
            rax_49 = &rcx_45[3]
        
        data_143f02d74 += 1
        data_143f02d90 = rax_49
        *data_143f02d68 = rcx_45
        data_143f02d68 = &rcx_45[1]
        rcx_45[1] = 0
        *rcx_45 = &data_142dd5b40
        rcx_45[2] = rbx_10
        int64_t var_90 = data_143f02f10
        sub_1414bf470(rcx_4 + 0x118, &data_143f02d60, &var_90, 0, *(r12_1 - 0x10))
        sub_1414bf470(rcx_4 + 0x120, &data_143f02d60, &var_90, 0, *(r12_1 - 8))
        sub_1414bf470(rcx_4 + 0x128, &data_143f02d60, &var_90, 0, *r12_1)
        sub_1414bf470(rcx_4 + 0x130, &data_143f02d60, &var_90, 0, *(r12_1 + 8))
        void** var_a8_4
        var_a8_4.d = r14_2
        sub_1419cd1c0(&data_143f02d60, rcx_4, r14_2, r14_2, var_a8_4.d)
        int64_t rbx_12 = data_143f02f10
        sub_14077cfd0(rcx_4 + 0x118, &data_143f02d60, rbx_12)
        sub_14077cfd0(rcx_4 + 0x120, &data_143f02d60, rbx_12)
        sub_14077cfd0(rcx_4 + 0x128, &data_143f02d60, rbx_12)
        sub_14077cfd0(rcx_4 + 0x130, &data_143f02d60, rbx_12)
        i_2 += 1
        r12_1 += 0x20
    while (i_2 s< *(r15 + 0xa8))
    
    rdi_2 = var_98
    rsi = zx.q(arg_18)

uint32_t rdx_16 = (rsi << 3).d
int64_t* rbx_15 = (data_143f02d90 + 7) & 0xfffffffffffffff8
int64_t r14_4 = sx.q(rdx_16)
int64_t r15_3 = *rcx_7
void* rcx_56 = r14_4 + rbx_15

if (rcx_56 u> data_143f02d98)
    sub_140b0e3d0(&data_143f02d90, rdx_16 + 8)
    rbx_15 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    rcx_56 = r14_4 + rbx_15

data_143f02d90 = rcx_56
int64_t i_5 = sx.q(rsi.d)

if (rsi.d s> 0)
    int64_t* rcx_57 = rbx_15
    int64_t i_3
    
    do
        *rcx_57 = *(rdi_2 - rbx_15 + rcx_57)
        rcx_57 = &rcx_57[1]
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)
    rcx_56 = data_143f02d90

void*** rcx_59 = (rcx_56 + 7) & 0xfffffffffffffff8
void* rax_58 = &rcx_59[6]

if (rax_58 u> data_143f02d98)
    sub_140b0e3d0(&data_143f02d90, 0x38)
    rcx_59 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    rax_58 = &rcx_59[6]

data_143f02d74 += 1
data_143f02d90 = rax_58
*data_143f02d68 = rcx_59
data_143f02d68 = &rcx_59[1]
rcx_59[4].d = 0
rcx_59[1] = 0
*(rcx_59 + 0x24) = 1
*rcx_59 = &data_142da7798
rcx_59[2].d = rsi.d
rcx_59[3] = rbx_15
rcx_59[5] = r15_3
sub_141974410(&data_143f02d60)
return sub_1405d1550(&var_88)

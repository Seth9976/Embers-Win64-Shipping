// 函数: sub_1413915f0
// 地址: 0x1413915f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
int32_t i = 0
int32_t r13 = *(*(arg3 + 0x30) + 8)
arg1[0x7b].b = 0
int32_t rax_1
rax_1.b = r13 s>= 3
*(arg1 + 0x3d4) = rax_1

if (*(arg3 + 0x18) s> 0)
    int64_t rcx = 0
    
    do
        void* rdx = *(*(arg3 + 0x10) + rcx)
        
        if (*(rdx + 0xd75) != 0 || *(rdx + 0xd72) != 0)
            arg1[0x7b].b = 1
        
        i += 1
        rcx += 8
    while (i s< *(arg3 + 0x18))

int64_t var_58
sub_141397080(arg1, &var_58, arg3 + 0x10)
sub_1419a97d0(&var_58, &var_58)
int32_t rax_4 = *(data_143ec4c08 + 4)
int32_t rax_6

if (*(arg1 + 0x3d4) != 0 || *(data_143ec4c58 + 4) == 0)
    *(arg1 + 0x3e0) = data_1439c7ad8
    rax_6 = data_1439c7ae8
else
    *(arg1 + 0x3e0) = data_1439c7af0
    rax_6 = data_1439c7b00

uint64_t rcx_3 = zx.q(data_14401b1a0)
arg1[0x7e].d = rax_6
*(arg1 + 0x3f4) = data_1439c7b68
*(arg1 + 0x404) = data_1439c7b78
TEB* gsbase
int32_t* r15_1 = *(gsbase->ThreadLocalStoragePointer + (rcx_3 << 3)) + 0x14

if (data_143ec6f18 s> *r15_1)
    _Init_thread_header(&data_143ec6f18)
    
    if (data_143ec6f18 == 0xffffffff)
        int64_t* rcx_17 = data_143db18d0
        
        if (rcx_17 == 0)
            sub_140a53c40()
            rcx_17 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_31 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.SceneColorFormat", r8_4)
        int64_t rax_32
        
        if (rax_31 == 0)
            rax_32 = 0
        else
            int64_t rdx_9 = *rax_31
            rax_32 = (*(rdx_9 + 0x58))(rax_31, rdx_9)
        
        data_143ec6f10 = rax_32
        _Init_thread_footer(&data_143ec6f18)

int32_t rax_11 = *(data_143ec6f10 + 4)
char rax_12 = sub_1422eb710()
int32_t r8_1

if (rax_12 != 0)
    r8_1 = 0xa

if (rax_12 == 0 || data_1439c7a69 == 0)
    r8_1 = 2

int32_t rdi = r8_1

if (data_143ec6fa8 s> *r15_1)
    _Init_thread_header(&data_143ec6fa8)
    
    if (data_143ec6fa8 == 0xffffffff)
        int64_t* rcx_19 = data_143db18d0
        
        if (rcx_19 == 0)
            sub_140a53c40()
            rcx_19 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        int64_t* rax_34 = (*(*rcx_19 + 0xb0))(rcx_19, u"r.Mobile.SceneColorFormat", r8_5)
        int64_t rax_35
        
        if (rax_34 == 0)
            rax_35 = 0
        else
            int64_t rdx_10 = *rax_34
            rax_35 = (*(rdx_10 + 0x58))(rax_34, rdx_10)
        
        data_143ec6fa0 = rax_35
        _Init_thread_footer(&data_143ec6fa8)

int32_t rdx_3 = *(data_143ec6fa0 + 4)

if (rdx_3 == 1)
    rdi = 0xa
else if (rdx_3 == 2)
    rdi = 0x1a
else if (rdx_3 == 3)
    rdi = rdx_3 - 1

if ((&data_1439c8600)[zx.q(rdi) * 0x28] != 0)
    r8_1 = rdi

if (data_143ec6f28 s> *r15_1)
    _Init_thread_header(&data_143ec6f28)
    
    if (data_143ec6f28 == 0xffffffff)
        int64_t* rcx_21 = data_143db18d0
        
        if (rcx_21 == 0)
            sub_140a53c40()
            rcx_21 = data_143db18d0
        
        int64_t r8_6
        r8_6.b = 1
        int64_t* rax_37 = (*(*rcx_21 + 0xb0))(rcx_21, u"r.AllowStaticLighting", r8_6)
        int64_t rax_38
        
        if (rax_37 == 0)
            rax_38 = 0
        else
            int64_t rdx_11 = *rax_37
            rax_38 = (*(rdx_11 + 0x58))(rax_37, rdx_11)
        
        data_143ec6f20 = rax_38
        _Init_thread_footer(&data_143ec6f28)

bool arg_18 = *(data_143ec6f20 + 4) != 0
bool arg_8 = data_143ec4124 != 0
int32_t rdi_1 = 0x800
int32_t r15_2 = data_143a30378.d
int32_t rcx_6 = *(data_143ec4ab8 + 4)
int32_t rbp

if (rcx_6 s>= 1)
    rbp = 0x800
    
    if (rcx_6 s< 0x800)
        rbp = rcx_6
else
    rbp = 1

if (*(*(arg3 + 0x30) + 8) s< 3)
    int32_t rax_19 = data_1439c7a74
    
    if (data_1439c7a70 s>= rax_19)
        rax_19 = data_1439c7a70
    
    if (r15_2 * 2 s> rax_19)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_19)
        r15_2 = (temp3_1 - temp2_1) s>> 1

int32_t rcx_8 = data_1439b70ac

if (rcx_8 s< 4)
    rdi_1 = 4
else if (rcx_8 s< 0x800)
    rdi_1 = rcx_8

uint32_t r12 = zx.d(sub_14139cf50(r13))
char rax_24 = sub_141248b20(r13)

if (data_143ec6f38 s> *r15_1)
    _Init_thread_header(&data_143ec6f38)
    
    if (data_143ec6f38 == 0xffffffff)
        int64_t* rcx_23 = data_143db18d0
        
        if (rcx_23 == 0)
            sub_140a53c40()
            rcx_23 = data_143db18d0
        
        int64_t r8_7
        r8_7.b = 1
        int64_t* rax_40 = (*(*rcx_23 + 0xb0))(rcx_23, u"r.Shadow.MinResolution", r8_7)
        
        if (rax_40 != 0)
            int64_t rdx_12 = *rax_40
            r14 = (*(rdx_12 + 0x58))(rax_40, rdx_12)
        
        data_143ec6f30 = r14
        _Init_thread_footer(&data_143ec6f38)

int32_t r8_2 = *(data_143ec6f30 + 4)
int64_t rax_27 = var_58
bool r10 = arg_8
int32_t rcx_13

if (*(arg1 + 0x37c) != rax_27.d)
    rcx_13 = r8_1
label_141391943:
    arg1[0x76].d = rcx_13
    arg1[0x75].d = rax_4
    *(arg1 + 0x3ac) = rax_11
    *(arg1 + 0x3b4) = arg_18
    *(arg1 + 0x3a4) = r10
    arg1[0x77].d = r15_2
    *(arg1 + 0x3bc) = rbp
    arg1[0x78].d = rdi_1
    *(arg1 + 0x3c4) = r12
    arg1[0x79].d = r8_2
    *(arg1 + 0x3cc) = rax_24
    arg_8.q = rax_27
    sub_1419a97d0(&arg_8, arg1 + 0x37c)
    sub_1419ba620(arg1)
else
    rcx_13 = r8_1
    
    if (arg1[0x70].d != var_58:4.d || arg1[0x75].d != rax_4 || *(arg1 + 0x3ac) != rax_11
            || arg1[0x76].d != rcx_13 || *(arg1 + 0x3b4) != arg_18 || *(arg1 + 0x3a4) != r10
            || arg1[0x77].d != r15_2 || *(arg1 + 0x3bc) != rbp || arg1[0x78].d != rdi_1
            || *(arg1 + 0x3c4) != r12 || *(arg1 + 0x3cc) != rax_24 || arg1[0x79].d != r8_2)
        goto label_141391943
arg1[0x7a].d = r13
return sub_1413932f0(arg1, arg2, *(arg3 + 0x18))

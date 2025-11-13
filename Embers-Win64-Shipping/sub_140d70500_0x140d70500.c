// 函数: sub_140d70500
// 地址: 0x140d70500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void*** rax_2 = j_sub_140a82f30(0x100)
void*** rbx

if (rax_2 == 0)
    rbx = nullptr
else
    rbx = sub_140d71120(rax_2)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142e151a8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx

void*** var_d0 = rbx
sub_140d722a0(arg1, &var_d0)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp1_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_4)[1](rax_4, 1)

arg1[0x11] = arg2
*arg1 = &data_142ebff90
arg1[0x12].d = 0
arg1[0x10] = &data_142ec00c0
*(arg1 + 0x94) = 0
__builtin_memset(&arg1[0x13], 0, 0x40)
void*** rax_7 = j_sub_140a82f30(0x500)
void*** rbx_2

if (rax_7 == 0)
    rbx_2 = nullptr
else
    rbx_2 = sub_140d72400(rax_7, &arg1[3])

void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 == 0)
    rax_9 = nullptr
else
    rax_9[1].d = 1
    *rax_9 = &data_142d42ea8
    *(rax_9 + 0xc) = 1
    rax_9[2] = rbx_2

arg1[0x1b] = rbx_2
arg1[0x1c] = rax_9
__builtin_memset(&arg1[0x1d], 0, 0x11)
arg1[0x20].d = 1
int64_t* rcx_6 = data_143db18d0

if (rcx_6 == 0)
    sub_140a53c40()
    rcx_6 = data_143db18d0

arg1[0x22] = (*(*rcx_6 + 0x38))(rcx_6, Slate.DeferWindowsMessageProcessing", &arg1[0x20], 
    Whether windows message processing is deferred until tick or if they are processed immediately", 0)
arg1[0x21] = &data_142d3ff10
arg1[0x23].b = 0
arg1[0x25] = 0
arg1[0x26] = 0
__builtin_memset(&arg1[0x2c], 0, 0x40)
int64_t* rax_12 = j_sub_140a82f30(0xb8)
int64_t* rax_13

if (rax_12 == 0)
    rax_13 = nullptr
else
    rax_13 = sub_140d71a20(rax_12, arg1)

arg1[0x34] = rax_13
__builtin_memset(&arg1[0x3a], 0, 0x11)
*(arg1 + 0x1e4) = data_143dbb180
*(arg1 + 0x1ec) = data_143dbb180
*(arg1 + 0x1f4) = data_143dbb180
__builtin_memset(arg1 + 0x1fc, 0, 0x14)
*(arg1 + 0xf9) = 0
*(arg1 + 0xfd) = 0
*(arg1 + 0xff) = 0
DisableProcessWindowsGhosting()
WNDCLASSW wndClass
wndClass.hInstance = arg1[0x11]
int128_t zmm0 = zx.o(0)
wndClass.lpfnWndProc = sub_140d766e0
wndClass.lpszClassName = u"UnrealWindow"
wndClass.style.q = 8
wndClass.cbClsExtra = 0
wndClass.cbWndExtra = 0
wndClass.hIcon = arg3
wndClass.hCursor = 0
wndClass.hbrBackground = zmm0.q
wndClass.lpszMenuName = zmm0:8.q

if (RegisterClassW(&wndClass) == 0)
    void* rax_19 = sub_140a7b0a0()
    
    if (rax_19 != 0)
        sub_140a8dc00(rax_19, 0)
    
    MessageBoxW(nullptr, u"Window Registration Failed!", u"Error!", MB_ICONEXCLAMATION)
    void* rax_20 = sub_140a7b0a0()
    
    if (rax_20 != 0)
        sub_140a89de0(rax_20, 0)

OleInitialize(nullptr)
void*** rax_21 = j_sub_140a82f30(0x100)
void*** rbx_3 = rax_21

if (rax_21 == 0)
    rbx_3 = nullptr
else
    int64_t* rcx_11 = &rbx_3[0xe]
    *rbx_3 = &data_142ebff58
    __builtin_memset(&rbx_3[2], 0, 0x1c)
    __builtin_memset(&rbx_3[6], 0, 0x1c)
    __builtin_memset(&rbx_3[0xa], 0, 0x20)
    rcx_11[2] = 0
    rcx_11[3].d = 0
    *(rcx_11 + 0x1c) = 0x80
    int64_t* rax_22 = rcx_11[2]
    
    if (rax_22 != 0)
        rcx_11 = rax_22
    
    *rcx_11 = 0
    rcx_11[1] = 0
    void* rcx_12 = &rbx_3[0x18]
    rbx_3[0x12].d = 0xffffffff
    *(rbx_3 + 0x94) = 0
    rbx_3[0x14] = 0
    rbx_3[0x15].d = 0
    rbx_3[0x16] = 0
    rbx_3[0x17] = 0
    *(rcx_12 + 0x10) = 0
    *(rcx_12 + 0x18) = 0
    *(rcx_12 + 0x1c) = 0x80
    void* rax_23 = *(rcx_12 + 0x10)
    
    if (rax_23 != 0)
        rcx_12 = rax_23
    
    *rcx_12 = 0
    *(rcx_12 + 8) = 0
    rbx_3[0x1c].d = 0xffffffff
    *(rbx_3 + 0xe4) = 0
    rbx_3[0x1e] = 0
    rbx_3[0x1f].d = 0

void*** rax_24 = j_sub_140a82f30(0x18)
void*** rdi_1 = rax_24

if (rax_24 == 0)
    rdi_1 = nullptr
else
    rax_24[1].d = 1
    *(rax_24 + 0xc) = 1
    *rdi_1 = &data_142d42ea8
    rdi_1[2] = rbx_3

var_d0 = rbx_3
void*** var_c8_1 = rdi_1

if (&arg1[0x30] == &var_d0)
label_140d70a11:
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rdi_1)[1](rdi_1, 1)
else
    arg1[0x30] = rbx_3
    int64_t* rbx_4 = arg1[0x31]
    var_d0 = nullptr
    
    if (rdi_1 == rbx_4)
        goto label_140d70a11
    
    void*** var_c8_2 = nullptr
    arg1[0x31] = rdi_1
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp5_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
        
        rdi_1 = var_c8_2
        goto label_140d70a11

void* rbx_5 = arg1[0x30]
*(rbx_5 + 8) = 0
*(rbx_5 + 0x40) = ImmCreateContext()
uint32_t rax_31 = ImmGetProperty(GetKeyboardLayout(0), 4)
bool cond:0 = *(rbx_5 + 0x40) == 0
*(rbx_5 + 0x48) = rax_31
char rax_32

if (not(cond:0))
    rax_32 = sub_140d7e580(rbx_5)

if (not(cond:0) && rax_32 != 0)
    HKL param0 = GetKeyboardLayout(0)
    int64_t* rcx_19 = *(rbx_5 + 0x18)
    int64_t var_60
    
    if ((*(*rcx_19 + 0x50))(rcx_19, "c\t4", &wndClass) s< 0 || var_60 == 0 || wndClass.style != 1)
        if (ImmGetIMEFileNameW(param0, nullptr, 0) != 0)
            *(rbx_5 + 8) = 1
            sub_140d7f600(rbx_5)
    else
        *(rbx_5 + 8) = 2
        sub_140d7f600(rbx_5)
else if (&arg1[0x30] != &var_d0)
    arg1[0x30] = 0
    int64_t* rbx_6 = arg1[0x31]
    
    if (rbx_6 != 0)
        arg1[0x31] = 0
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp7_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* rax_38 = j_sub_140a82f30(8)
int64_t* rbx_7 = rax_38

if (rax_38 == 0)
    rbx_7 = nullptr
else
    *rax_38 = 0

void*** rax_39 = j_sub_140a82f30(0x18)

if (rax_39 == 0)
    rax_39 = nullptr
else
    rax_39[1].d = 1
    *rax_39 = &data_142ec1818
    *(rax_39 + 0xc) = 1
    rax_39[2] = rbx_7

var_d0 = rbx_7
void*** rbx_8 = var_d0
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

int32_t ppv

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && sub_140b65b00() != 0)
    ppv.q = rbx_8
    
    if (CoCreateInstance(&data_1434cb200, 0, CLSCTX_INPROC_SERVER, &data_1434cb1e0, ppv) != 0)
        *rbx_8 = nullptr

void*** rbx_9 = rax_39
void*** rdi_3 = rbx_9

if (rbx_9 != 0)
    rbx_9[1].d += 1
    rbx_9 = rax_39

void var_c0

if (&arg1[0x32] == &var_c0)
label_140d70c3b:
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d != 1)
            rbx_9 = rax_39
        else
            (**rdi_3)(rdi_3)
            int32_t temp10_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp10_1 != 1)
                rbx_9 = rax_39
            else
                (*rdi_3)[1](rdi_3, 1)
                rbx_9 = rax_39
else
    arg1[0x32] = var_d0
    void*** r14_1 = arg1[0x33]
    
    if (rdi_3 == r14_1)
        goto label_140d70c3b
    
    arg1[0x33] = rdi_3
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d != 1)
            rbx_9 = rax_39
        else
            (**r14_1)(r14_1)
            int32_t temp13_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp13_1 != 1)
                rbx_9 = rax_39
            else
                (*r14_1)[1](r14_1, 1)
                rbx_9 = rax_39

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9)
        int32_t temp12_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*rbx_9)[1](rbx_9, 1)

sub_140d84bf0(&arg1[0x24])
ppv.q = &data_143de5780
sub_140af2fd0(data_143ddb400, u"WindowsApplication", u"bConsumeAltSpace", arg1 + 0x95, ppv)
arg1[0x35] = 0
__builtin_memset(&arg1[0x36], 0, 0x20)
arg1[0x35].d = 8
arg1[0x36].d = 8
arg1[0x37].d = 0x18
SystemParametersInfoW(SPI_GETSTICKYKEYS, 8, &arg1[0x35], 0)
SystemParametersInfoW(SPI_GETTOGGLEKEYS, 8, &arg1[0x36], 0)
SystemParametersInfoW(SPI_GETFILTERKEYS, 0x18, &arg1[0x37], 0)
int32_t r8_7 = *(arg1 + 0x1ac)
int32_t rdx_6 = *(arg1 + 0x1b4)
int32_t rcx_34 = *(arg1 + 0x1bc)
uint8_t var_d3 = (r8_7 u>> 2).b & 1
uint8_t var_d6 = (r8_7 u>> 3).b & 1
uint8_t var_d8 = (rdx_6 u>> 2).b & 1
uint8_t var_d5 = (rdx_6 u>> 3).b & 1
uint8_t var_d4 = (rcx_34 u>> 3).b & 1
void* rcx_36 = data_143ddb400
uint8_t var_d7 = (rcx_34 u>> 2).b & 1
ppv.q = &data_143de5780
sub_140af2fd0(rcx_36, u"WindowsApplication.Accessibility", u"StickyKeysHotkey", &var_d3, ppv)
ppv.q = &data_143de5780
sub_140af2fd0(data_143ddb400, WindowsApplication.Accessibility", ToggleKeysHotkey", &var_d8, ppv)
ppv.q = &data_143de5780
sub_140af2fd0(data_143ddb400, WindowsApplication.Accessibility", FilterKeysHotkey", &var_d7, ppv)
ppv.q = &data_143de5780
sub_140af2fd0(data_143ddb400, WindowsApplication.Accessibility", StickyKeysConfirmation", &var_d6, 
    ppv)
ppv.q = &data_143de5780
sub_140af2fd0(data_143ddb400, WindowsApplication.Accessibility", ToggleKeysConfirmation", &var_d5, 
    ppv)
ppv.q = &data_143de5780
sub_140af2fd0(data_143ddb400, WindowsApplication.Accessibility", FilterKeysConfirmation", &var_d4, 
    ppv)
uint8_t r9_7 = var_d3
int32_t rdx_8 = *(arg1 + 0x1ac)
int32_t rdx_9

if (r9_7 == 0)
    rdx_9 = rdx_8 & 0xfffffffb
else
    rdx_9 = rdx_8 | 4

int32_t rax_56 = *(arg1 + 0x1b4)
int32_t rax_57

if (var_d8 == 0)
    rax_57 = rax_56 & 0xfffffffb
else
    rax_57 = rax_56 | 4

int32_t rcx_42 = *(arg1 + 0x1bc)
int32_t rcx_43

if (var_d7 == 0)
    rcx_43 = rcx_42 & 0xfffffffb
else
    rcx_43 = rcx_42 | 4

int32_t rdx_10

if (var_d6 == 0)
    rdx_10 = rdx_9 & 0xfffffff7
else
    rdx_10 = rdx_9 | 8

bool cond:3 = var_d5 == 0
*(arg1 + 0x1ac) = rdx_10
int32_t rax_58

if (cond:3)
    rax_58 = rax_57 & 0xfffffff7
else
    rax_58 = rax_57 | 8

bool cond:4 = var_d4 == 0
*(arg1 + 0x1b4) = rax_58
int32_t rcx_44

if (cond:4)
    rcx_44 = rcx_43 & 0xfffffff7
else
    rcx_44 = rcx_43 | 8

*(arg1 + 0x1bc) = rcx_44
ppv.q = &data_143de5780
sub_140b00570(data_143ddb400, u"WindowsApplication.Accessibility", u"StickyKeysHotkey", r9_7)
ppv.q = &data_143de5780
sub_140b00570(data_143ddb400, u"WindowsApplication.Accessibility", u"ToggleKeysHotkey", var_d8)
ppv.q = &data_143de5780
sub_140b00570(data_143ddb400, u"WindowsApplication.Accessibility", u"FilterKeysHotkey", var_d7)
ppv.q = &data_143de5780
sub_140b00570(data_143ddb400, WindowsApplication.Accessibility", StickyKeysConfirmation", var_d6)
ppv.q = &data_143de5780
sub_140b00570(data_143ddb400, WindowsApplication.Accessibility", ToggleKeysConfirmation", var_d5)
ppv.q = &data_143de5780
sub_140b00570(data_143ddb400, WindowsApplication.Accessibility", FilterKeysConfirmation", var_d4)
sub_140af04f0(data_143ddb400, 0, &data_143de5780)
void*** var_c8_3
var_c8_3.d = 0
var_d0 = sub_140d78de0
int64_t* rax_59 = sub_140a84c80(0, 0x30, 0)

if (rax_59 != 0)
    int128_t zmm0_1 = var_d0.o
    rax_59[1] = arg1
    *rax_59 = &data_142e22de8
    *(rax_59 + 0x10) = zmm0_1
    rax_59[5] = sub_140a387b0()
    *rax_59 = &data_142e22e40

if (rax_59 != 0)
    sub_140599630(&data_14399fc70, 1)
    (*(*rax_59 + 0x30))(rax_59, &var_d0)
    int64_t rdi_4 = sx.q(data_14399fc78)
    int32_t rax_62 = (rdi_4 + 1).d
    bool cond:6_1 = rax_62 s<= data_14399fc7c
    data_14399fc78 = rax_62
    
    if (not(cond:6_1))
        sub_1405a4f90(&data_14399fc70)
    
    void** rax_65 = (rdi_4 << 4) + data_14399fc70
    *rax_65 = rax_59
    rax_65[1].d = 3

sub_140d765d0(arg1, 0)
sub_140d843e0(arg1)
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"NoGamepad") != 0)
    *(arg1 + 0x94) = 1

__security_check_cookie(rax_1 ^ &var_108)
return arg1

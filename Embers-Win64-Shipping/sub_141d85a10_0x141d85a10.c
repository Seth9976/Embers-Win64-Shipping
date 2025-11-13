// 函数: sub_141d85a10
// 地址: 0x141d85a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x29].b == 0
*arg1 = &data_143237408
arg1[2] = &data_143237430

if (not(cond:0))
    sub_141d8b200(&arg1[2])
else if (data_143f0f19c != 0)
    char rax_1 = sub_140a80f40()
    
    if (rax_1 != 0)
        sub_1417f5d40(arg1)
    else if (data_143f138f4 != rax_1)
    label_141d85aa5:
        void var_38
        void** rax_3 = sub_141d87850(&var_38, nullptr, 0xff)
        *(*rax_3 + 0x10) = arg1
        void* rcx_3 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_1 = rax_3[1]
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rbx_1 = arg_10
        
        sub_1405a5630(rcx_3, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_4 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_4 == 1)
                sub_140a2f6e0(arg_10)
    else if (data_143de5480 == rax_1)
        sub_1417f5d40(arg1)
    else
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b == 0)
            goto label_141d85aa5
        
        sub_1417f5d40(arg1)

if (data_143de56d0 != 0)
    int64_t* rcx_6 = data_143de56c8
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x38))(rcx_6, 0)
        int64_t rcx_7 = data_143de56c8
        
        if (rcx_7 != 0)
            data_143de56c8 = sub_140a84c80(rcx_7, 0, 0)
        
        data_143de56d0 = 0

sub_1419a21e0(0)
int64_t* rbx_2 = arg1[0x32]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg1[0x30]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rbp_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rbp_1))

DeleteCriticalSection(&arg1[0x2a])
sub_140596eb0(&arg1[0x25])
sub_140596eb0(&arg1[0x22])
sub_140596eb0(&arg1[0x1f])
sub_140596eb0(&arg1[0x1c])
sub_141d85d40(&arg1[0x16])
int64_t* rcx_18 = arg1[0x12]

if (rcx_18 != 0)
    int32_t temp3_1 = *(rcx_18 + 0xc)
    *(rcx_18 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_18 + 8))(rcx_18, 1)

int64_t* rbx_4 = arg1[0x10]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp6_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = arg1[0xe]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp8_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* rbx_6 = arg1[0xc]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp10_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* rcx_25 = arg1[0xa]

if (rcx_25 != 0)
    int32_t temp9_1 = *(rcx_25 + 0xc)
    *(rcx_25 + 0xc) -= 1
    
    if (temp9_1 == 1)
        (*(*rcx_25 + 8))(rcx_25, 1)

int64_t* rbx_7 = arg1[8]

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp13_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

sub_140596d80(&arg1[5])
int64_t* rcx_29 = arg1[4]

if (rcx_29 != 0)
    int32_t temp12_1 = *(rcx_29 + 0xc)
    *(rcx_29 + 0xc) -= 1
    
    if (temp12_1 == 1)
        (*(*rcx_29 + 8))(rcx_29, 1)

arg1[2] = &data_143237330
*arg1 = &data_142fdd510
return sub_1417f5d40(arg1) __tailcall

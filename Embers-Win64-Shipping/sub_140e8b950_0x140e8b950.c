// 函数: sub_140e8b950
// 地址: 0x140e8b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e29f28 == 0)
    return 

char arg_10
int64_t* rax_1
int512_t zmm1_1
rax_1, zmm1_1 = sub_140b58260(&arg_10, u"Slate", 1)
sub_140af2a70()
bool r8_1 = sub_140b02790(&data_143de5cb0, *rax_1)
int64_t* rsi_1 = data_143e29f28
arg_10 = 0
int64_t* i = rsi_1[0x57]

for (void* rdi_3 = &i[sx.q(rsi_1[0x58].d) * 2]; i != rdi_3; i = &i[2])
    void* rdx_2 = *i
    
    if (rdx_2 != 0 && *(rdx_2 + 0x20) != 0)
        r8_1 = j_sub_140e55dd0(&arg_10, rdx_2)

int32_t rax_2 = rsi_1[0x31].d
int64_t rbx_2 = sx.q(rax_2 - 1)
int64_t var_18

if (rax_2 - 1 s>= 0)
    int64_t rdi_5 = rbx_2 << 4
    int64_t temp1_1
    
    do
        int64_t* rcx_2 = rsi_1[0x30]
        var_18 = *(rcx_2 + rdi_5)
        void* rax_5 = *(rcx_2 + rdi_5 + 8)
        void* var_10_1 = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        r8_1 = (*(*rsi_1 + 0x130))(rsi_1, &var_18)
        rdi_5 -= 0x10
        temp1_1 = rbx_2
        rbx_2 -= 1
    while (temp1_1 - 1 s>= 0)

sub_140e5e280(rsi_1, zmm1_1, r8_1)
void* rax_7 = data_143e29f28
int64_t* rcx_5 = *(rax_7 + 0x20)

if (rcx_5 != 0)
    (*(*rcx_5 + 0x18))(rcx_5)
    rax_7 = data_143e29f28

if (rax_7 + 0x20 != &var_18)
    *(rax_7 + 0x20) = 0
    int64_t* rbx_3 = *(rax_7 + 0x28)
    
    if (rbx_3 != 0)
        *(rax_7 + 0x28) = 0
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp4_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

if (arg1 != 0)
    int64_t* rcx_8 = data_143e20d18
    (*(*rcx_8 + 0xd8))(rcx_8)

int64_t* rbx_4 = data_143e20d20
data_143e20d18 = 0

if (rbx_4 != 0)
    data_143e20d20 = 0
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp6_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = data_143e29f30
data_143e29f28 = 0

if (rbx_5 != 0)
    data_143e29f30 = 0
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp8_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* rbx_6 = data_143e20d10
data_143e20d08 = 0

if (rbx_6 == 0)
    return 

data_143e20d10 = 0
rbx_6[1].d -= 1

if (rbx_6[1].d != 1)
    return 

(**rbx_6)(rbx_6)
int32_t temp9_1 = *(rbx_6 + 0xc)
*(rbx_6 + 0xc) -= 1

if (temp9_1 == 1)
    (*(*rbx_6 + 8))(rbx_6, 1)

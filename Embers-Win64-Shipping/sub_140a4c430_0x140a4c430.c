// 函数: sub_140a4c430
// 地址: 0x140a4c430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143d796dc != 0
data_143d796e0 = arg1
data_143d796e8 = arg2

if (cond:0)
    return &__return_addr

data_143d796dc = 1
void var_98
sub_140b6c480(&var_98)
int64_t rcx_1 = data_143d796f0

if (rcx_1 != 0)
    sub_140b65600(rcx_1)

int64_t rdx_1 = data_143ddb418

if (rdx_1 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    (*(*rcx_2 + 0x78))(rcx_2, rdx_1)

sub_140af4c00()
int64_t rbp
rbp.b = 0
data_1439a04ec += 1
int32_t rcx_3 = data_1439a04ec
int32_t rax_1 = data_1439a04e0
int64_t rdi_1 = sx.q(rax_1 - 1)

if (rax_1 - 1 s>= 0)
    int64_t rbx_2 = rdi_1 << 4
    int64_t temp1_1
    
    do
        int64_t rax_3 = data_1439a04d8
        
        if (*(rbx_2 + rax_3 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_4 = *(rbx_2 + rax_3)
            
            if (rcx_4 == 0)
                rbp.b = 1
            else if ((*(*rcx_4 + 0x50))(rcx_4) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_3 = data_1439a04ec

data_1439a04ec = rcx_3 - 1

if (rbp.b != 0)
    sub_140599630(&data_1439a04d8, 0)

int32_t var_a8_1 = arg2
sub_140af98a0("Unknown", 0xba, u"Ran out of memory allocating %llu bytes with alignment %u", arg1)
return sub_140afbb40()

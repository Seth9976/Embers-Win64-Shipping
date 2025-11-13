// 函数: sub_142030a40
// 地址: 0x142030a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
sub_140597df0(&arg1[0x44], arg3)
void var_48
sub_142427eb0(&var_48)
int64_t rax_2 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
int64_t r8 = *arg1
int32_t var_1c
int32_t var_1c_1 = var_1c | 0x40
int64_t var_30 = rax_2
void arg_8
int64_t* rax_3 = (*(r8 + 0x698))(arg1, &arg_8, r8)
int32_t rdi = 0
int64_t* rdx_2

if (*rax_3 == 0)
    rdx_2 = nullptr
else
    void* rax_4 = sub_1424be5f0()
    
    if (rax_4 == 0)
        rdx_2 = nullptr
    else
        rdx_2 = *rax_3
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> rdx_2[7].d || *(rdx_2[6] + (rax_5 << 3)) != rax_4 + 0x30)
            rdx_2 = nullptr

void* rax_7 = sub_1420efae0(rax_1, rdx_2, nullptr, nullptr, &var_48)
arg1[0x4f] = rax_7
int64_t r8_2 = *rax_7
(*(r8_2 + 0x628))(rax_7, arg3, r8_2)
int64_t rbp
rbp.b = 0
int32_t rdx_4 = data_143a2e0c8
int32_t rcx_8 = data_143a2e0d4 + 1
data_143a2e0d4 = rcx_8
int64_t rsi_1 = sx.q(rdx_4 - 1)

if (rdx_4 - 1 s>= 0)
    int64_t rbx_2 = rsi_1 << 4
    int64_t temp0_1
    
    do
        int64_t rax_9 = data_143a2e0c0
        
        if (*(rbx_2 + rax_9 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_9 = *(rbx_2 + rax_9)
            
            if (rcx_9 == 0)
                rbp.b = 1
            else if ((*(*rcx_9 + 0x50))(rcx_9, arg1) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rsi_1
        rsi_1 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_8 = data_143a2e0d4
    rdx_4 = data_143a2e0c8

data_143a2e0d4 = rcx_8 - 1

if (rbp.b != 0 && rcx_8 - 1 s<= 0)
    int32_t rsi_2 = rdx_4
    
    if (rdx_4 s> 0)
        int64_t* rbx_3 = nullptr
        
        do
            int64_t rax_13 = data_143a2e0c0
            
            if (*(rbx_3 + rax_13 + 8) == 0)
                sub_1405a4880(&data_143a2e0c0, rdi, 1, 1)
            else
                int64_t* rcx_10 = *(rbx_3 + rax_13)
                
                if (rcx_10 == 0)
                    sub_1405a4880(&data_143a2e0c0, rdi, 1, 1)
                else if ((*(*rcx_10 + 0x20))(rcx_10) != 0)
                    sub_1405a4880(&data_143a2e0c0, rdi, 1, 1)
                else
                    rdi += 1
                    rbx_3 = &rbx_3[2]
            
            rdx_4 = data_143a2e0c8
        while (rdi s< rdx_4)
    
    int32_t rax_16 = rdx_4 * 2
    
    if (rax_16 s<= 2)
        rax_16 = 2
    
    data_143a2e0d0 = rax_16
    
    if (rsi_2 s> rax_16 && data_143a2e0cc != rdx_4)
        sub_1405a5410(&data_143a2e0c0, rdx_4)

int32_t result = sub_141dcdc50(arg1)

if (result != 0)
    int64_t* rax_17 = sub_142168400()
    int64_t r9_2 = *rax_17
    result = (*(r9_2 + 0x2e0))(rax_17, rax_1, *(arg1[0x4f] + 0x230), r9_2)
    
    if (result.b == 0)
        int64_t* rcx_13 = arg1[0x4f]
        result = (*(*rcx_13 + 0x630))(rcx_13)
        
        if (result.b == 0)
            int64_t* rcx_14 = arg1[0x4f]
            return (*(*rcx_14 + 0x6c0))(rcx_14)

return result

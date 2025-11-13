// 函数: sub_1419cf010
// 地址: 0x1419cf010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int128_t* var_48
int64_t var_40
int32_t var_38

if (*(arg1 + 0x40) s> 0)
    var_40 = arg2
    int64_t* r14_1 = nullptr
    
    do
        void* rax_2 = *(arg1 + 0x38)
        
        if ((rax_2.b & 1) != 0)
            rax_2 = (rax_2 s>> 1) + arg1 + 0x38
        
        int128_t* rax_3 = *(r14_1 + rax_2)
        
        if ((rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + r14_1 + rax_2
        
        void* rcx_1 = *(arg1 + 0x18)
        var_48 = rax_3
        
        if ((rcx_1.b & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0x18
        
        sub_140a696e0(arg3, &var_38)
        int64_t rax_6 = *(rcx_1 + (sx.q(i) << 3))
        int128_t zmm0_1 = var_48.o
        int64_t* var_30
        *var_30 = rax_6
        int32_t rax_8 = var_38
        *(var_30 + 8) = zmm0_1
        var_30[3].d = 0xffffffff
        void arg_8
        sub_1419cd4d0(arg3, &arg_8, (rax_6 u>> 0x20).d * 0x17 + rax_6.d, var_30, rax_8, nullptr)
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x40))

void* i_2 = *(arg1 + 0x48)
int64_t rax_10 = i_2 s>> 1
char rdx_2 = *(arg1 + 0x48) & 1
void* i_1

if (rdx_2 == 0)
    i_1 = i_2
else
    i_1 = arg1 + 0x48 + rax_10

void* i_3 = arg1 + 0x48 + rax_10
int64_t result = sx.q(*(arg1 + 0x50))

if (rdx_2 == 0)
    i_3 = i_2

for (void* r15 = i_3 + (result << 3); i_1 != r15; i_1 += 8)
    void* rbx_3 = *i_1
    
    if ((rbx_3.b & 1) != 0)
        rbx_3 = (rbx_3 s>> 1) + i_1
    
    int128_t* rsi_2 = nullptr
    int32_t rdx_3 = 0
    int32_t rcx_7 = 0
    var_48 = nullptr
    var_40:4.d = 0
    void* rbx_4 = rbx_3 + 8
    int64_t j_1 = 5
    int64_t j
    
    do
        result = *rbx_4
        
        if (result != 0)
            if ((result.b & 1) != 0)
                result = (result s>> 1) + rbx_4
            
            int64_t rdi_2 = sx.q(rcx_7)
            var_38.q = result
            int64_t var_30_1 = arg2
            rcx_7 = (rdi_2 + 1).d
            var_40.d = rcx_7
            
            if (rcx_7 s> rdx_3)
                sub_1405a4f90(&var_48)
                rdx_3 = var_40:4.d
                rcx_7 = var_40.d
                rsi_2 = var_48
            
            result = rdi_2 * 2
            *(rsi_2 + (result << 3)) = var_38.o
        
        rbx_4 += 8
        j = j_1
        j_1 -= 1
    while (j != 1)
    int128_t* rbx_5 = rsi_2
    void* rdi_5 = &rsi_2[sx.q(rcx_7)]
    
    if (rsi_2 != rdi_5)
        do
            void* rax_13 = *rbx_5
            void* rdx_6
            
            if ((*(rax_13 + 0xf8) & 1) == 0)
                rdx_6 = *(rax_13 + 0xf8)
            else
                rdx_6 =
                    *(*(*(*(rbx_5 + 8) + 0x20) + 0x28) + (sx.q((*(rax_13 + 0xf8) u>> 1).d) << 3))
            
            result = sub_1419be4a0(arg3, rdx_6 + 0x28, rbx_5)
            rbx_5 = &rbx_5[1]
        while (rbx_5 != rdi_5)
    
    if (rsi_2 != 0)
        result = sub_140a74f90(rsi_2)

return result

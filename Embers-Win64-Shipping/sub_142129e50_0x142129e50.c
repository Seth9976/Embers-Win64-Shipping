// 函数: sub_142129e50
// 地址: 0x142129e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x1a]
int128_t entry_zmm2
int128_t entry_zmm3
int64_t* rax_6

if (rbx == 0)
    rax_6, entry_zmm2, entry_zmm3 = sub_14210f630(0)
    rbx = rax_6
else if ((*(*rbx + 0x278))(rbx, arg1) != 0)
    rax_6, entry_zmm2, entry_zmm3 = sub_14210f630(0)
    rbx = rax_6
else
    void* rax_3 = sub_142542e20()
    void* rdx_2 = rbx[2]
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        rax_6, entry_zmm2, entry_zmm3 = sub_14210f630(0)
        rbx = rax_6
void* rsi = arg1[0x28]

if (rsi != 0)
    void* rbp_1 = *(rsi + 0x1a0)
    
    if (rbp_1 != rbx)
        *(rsi + 0x1a0) = rbx
        int64_t* var_40_1 = rbx
        char rax_7 = sub_140a80f40()
        
        if (rax_7 != 0)
            *(rsi + 0x190) = rbx
            entry_zmm2 = sub_14212d2e0(rsi, 1)
        else if (data_143f138f4 != rax_7)
        label_142129f3c:
            void var_38
            int64_t* rax_9 = sub_1421226c0(&var_38, nullptr, 0xff)
            *(*rax_9 + 0x10) = rsi.o
            void* rcx_5 = *rax_9
            int32_t r8_2 = rax_9[2].d
            int64_t* rdx_4 = rax_9[1]
            int64_t* rbx_1 = *(rcx_5 + 0x28)
            int64_t* arg_10 = rbx_1
            int32_t* rsi_1 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rsi_1 += 1
                rbx_1 = arg_10
            
            sub_1405e48c0(rcx_5, rdx_4, r8_2, 1)
            
            if (rbx_1 != 0)
                int32_t rax_10 = *rsi_1
                *rsi_1 -= 1
                
                if (rax_10 == 1)
                    sub_140a2f6e0(arg_10)
        else if (data_143de5480 == rax_7)
            *(rsi + 0x190) = rbx
            entry_zmm2 = sub_14212d2e0(rsi, 1)
        else
            uint32_t rax_8
            rax_8.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_8.b == 0)
                goto label_142129f3c
            
            *(rsi + 0x190) = rbx
            entry_zmm2 = sub_14212d2e0(rsi, 1)
        
        if (rbp_1 != 0)
            sub_141997ac0(rbp_1 + 0x40, 0, entry_zmm2, entry_zmm3)

int32_t rcx_10 = arg1[1].d
int32_t i_4 = 0

if (((rcx_10 u>> 4).b & 1) == 0)
    int32_t i = 0
    
    if (arg1[0x1d].d s> 0)
        do
            sub_142118410(arg1, arg1[0x1c] + sx.q(i) * 0x24)
            i += 1
        while (i s< arg1[0x1d].d)
        
        rcx_10 = arg1[1].d

if (((rcx_10 u>> 4).b & 1) == 0)
    int32_t i_1 = 0
    
    if (arg1[0x1f].d s> 0)
        do
            sub_1421186c0(arg1, sx.q(i_1) * 0x30 + arg1[0x1e])
            i_1 += 1
        while (i_1 s< arg1[0x1f].d)
        
        rcx_10 = arg1[1].d

if (((rcx_10 u>> 4).b & 1) == 0)
    int32_t i_2 = 0
    
    if (arg1[0x21].d s> 0)
        do
            sub_142118550(arg1, arg1[0x20] + sx.q(i_2) * 0x28)
            i_2 += 1
        while (i_2 s< arg1[0x21].d)
        
        rcx_10 = arg1[1].d

uint8_t result = (rcx_10 u>> 4).b

if ((result & 1) == 0)
    int32_t i_3 = 0
    
    if (arg1[0x25].d s> 0)
        do
            result = sub_142118140(arg1, sx.q(i_3) * 0x30 + arg1[0x24])
            i_3 += 1
        while (i_3 s< arg1[0x25].d)
        
        rcx_10 = arg1[1].d

if (((rcx_10 u>> 4).b & 1) == 0 && arg1[0x23].d s> 0)
    do
        result = sub_1421182d0(arg1, arg1[0x22] + sx.q(i_4) * 0x28)
        i_4 += 1
    while (i_4 s< arg1[0x23].d)

int64_t* rcx_19 = arg1[0x28]

if (rcx_19 != 0)
    result = sub_142134750(arg1)
    rcx_19 = arg1[0x28]

if (rcx_19 == 0)
    return result

return sub_14211ef90(rcx_19, 0) __tailcall

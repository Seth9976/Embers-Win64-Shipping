// 函数: sub_1422e51d0
// 地址: 0x1422e51d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int32_t arg_8 = 0
char rax = sub_1423d2320(arg1)
TEB* gsbase

if (data_143f563d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f563d0)
    
    if (data_143f563d0 == 0xffffffff)
        int64_t* rcx_41 = data_143db18d0
        
        if (rcx_41 == 0)
            sub_140a53c40()
            rcx_41 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_68 = (*(*rcx_41 + 0xb0))(rcx_41, u"r.VirtualTexturedLightmaps", r8_1)
        int64_t rax_66
        
        if (rax_68 == 0)
            rax_66 = 0
        else
            int64_t rdx_7 = *rax_68
            rax_66 = (*(rdx_7 + 0x58))(rax_68, rdx_7)
        
        data_143f563c8 = rax_66
        _Init_thread_footer(&data_143f563d0)

char rax_2

if (rax != 0 && *(data_143f563c8 + 4) != 0)
    rax_2 = sub_1419ba670(arg1)

char rdx

if (rax == 0 || *(data_143f563c8 + 4) == 0 || rax_2 == 0)
    rdx = 0
else
    rdx = 1

*arg4 = *(data_143f10e68 + 0x10)
arg4[1] = *(data_143f10dc8 + 0x10)
arg4[2] = *(data_143f10e68 + 0x10)
arg4[3] = *(data_143f10dc8 + 0x10)
arg4[4] = *(data_143f10cc8 + 0x48)
arg4[5] = *(data_143f10cc8 + 0x48)
arg4[6] = *(data_143f10bc8 + 0x48)
arg4[7] = *(data_143f10cc8 + 0x48)
arg4[8] = *(data_143f10bc8 + 0x48)
arg4[0xd] = *(data_143f10e68 + 0x10)
arg4[0xe] = *(data_143f10e68 + 0x10)
arg4[9] = *(data_143f10e68 + 0x18)
arg4[0xa] = *(data_143f10dc8 + 0x18)
arg4[0xb] = *(data_143f10e68 + 0x18)
void* rax_17 = data_143f10dc8
arg4[0xc] = *(rax_17 + 0x18)

if (rdx == 0)
    int64_t* rax_44 = nullptr
    int32_t rdi_2 = 8
    
    if (rax == 0)
        rax_44 = 8
    
    void* r12_1 = *(rax_44 + arg2)
    void* var_78
    void* arg_20
    void* rax_45
    int32_t r14_1
    
    if (r12_1 == 0)
        rax_45 = *(data_143f10e68 + 0x10)
        arg_20 = rax_45
        
        if (rax_45 != 0)
            *(rax_45 + 8) += 1
            rax_45 = arg_20
        
        r14_1 = 2
    else
        rax_45 = *(r12_1 + 0x90)
        var_78 = rax_45
        
        if (rax_45 != 0)
            *(rax_45 + 8) += 1
            rax_45 = var_78
        
        r14_1 = 1
    
    *arg4 = rax_45
    
    if ((r14_1.b & 2) != 0)
        r14_1 &= 0xfffffffd
        sub_1405d1550(&arg_20)
    
    if ((r14_1.b & 1) != 0)
        r14_1 &= 0xfffffffe
        sub_1405d1550(&var_78)
    
    void* rax_47 = *(arg2 + 0x10)
    void* var_70
    void* var_68
    void* rax_48
    
    if (rax_47 == 0)
        rax_48 = *(data_143f10dc8 + 0x10)
        var_70 = rax_48
        
        if (rax_48 != 0)
            *(rax_48 + 8) += 1
            rax_48 = var_70
    else
        rax_48 = *(rax_47 + 0x90)
        var_68 = rax_48
        
        if (rax_48 != 0)
            *(rax_48 + 8) += 1
            rax_48 = var_68
        
        rdi_2 = 4
    
    int32_t rdi_3 = rdi_2 | r14_1
    arg4[1] = rax_48
    
    if ((rdi_3.b & 8) != 0)
        rdi_3 &= 0xfffffff7
        sub_1405d1550(&var_70)
    
    if ((rdi_3.b & 4) != 0)
        rdi_3 &= 0xfffffffb
        sub_1405d1550(&var_68)
    
    void* rax_50 = *(arg2 + 0x18)
    void* var_60
    void* var_58
    void* rax_51
    int32_t rsi_1
    
    if (rax_50 == 0)
        rax_51 = *(data_143f10e68 + 0x10)
        var_60 = rax_51
        
        if (rax_51 != 0)
            *(rax_51 + 8) += 1
            rax_51 = var_60
        
        rsi_1 = 0x20
    else
        rax_51 = *(rax_50 + 0x90)
        var_58 = rax_51
        
        if (rax_51 != 0)
            *(rax_51 + 8) += 1
            rax_51 = var_58
        
        rsi_1 = 0x10
    
    int32_t rsi_2 = rsi_1 | rdi_3
    arg4[2] = rax_51
    
    if ((rsi_2.b & 0x20) != 0)
        rsi_2 &= 0xffffffdf
        sub_1405d1550(&var_60)
    
    if ((rsi_2.b & 0x10) != 0)
        rsi_2 &= 0xffffffef
        sub_1405d1550(&var_58)
    
    int64_t rcx_33 = *(data_143f10e68 + 0x18)
    int64_t rax_54 = 0
    
    if (r12_1 != 0)
        void* rdx_2 = *(r12_1 + 0x78)
        
        if (rdx_2 != 0)
            rax_54 = *(rdx_2 + 0x18)
    
    if (rax_54 != 0)
        rcx_33 = rax_54
    
    arg4[9] = rcx_33
    void* rdx_3 = *(arg2 + 0x10)
    int64_t rcx_34 = *(data_143f10dc8 + 0x18)
    int64_t rax_56 = 0
    
    if (rdx_3 != 0)
        void* rdx_4 = *(rdx_3 + 0x78)
        
        if (rdx_4 != 0)
            rax_56 = *(rdx_4 + 0x18)
    
    if (rax_56 != 0)
        rcx_34 = rax_56
    
    arg4[0xa] = rcx_34
    void* rdx_5 = *(arg2 + 0x18)
    int64_t rcx_35 = *(data_143f10e68 + 0x18)
    int64_t rax_58 = 0
    
    if (rdx_5 != 0)
        void* rdx_6 = *(rdx_5 + 0x78)
        
        if (rdx_6 != 0)
            rax_58 = *(rdx_6 + 0x18)
    
    if (rax_58 != 0)
        rcx_35 = rax_58
    
    arg4[0xb] = rcx_35
    void* rax_59 = *(arg2 + 0x28)
    void* var_50
    void* var_48
    void* rax_60
    char rdi_4
    
    if (rax_59 == 0)
        rax_60 = *(data_143f10dc8 + 0x10)
        var_50 = rax_60
        
        if (rax_60 != 0)
            *(rax_60 + 8) += 1
            rax_60 = var_50
        
        rdi_4 = -0x80
    else
        rax_60 = *(rax_59 + 0x90)
        var_48 = rax_60
        
        if (rax_60 != 0)
            *(rax_60 + 8) += 1
            rax_60 = var_48
        
        rdi_4 = 0x40
    
    char rdi_5 = rdi_4 | rsi_2.b
    arg4[3] = rax_60
    
    if (rdi_5 s< 0)
        sub_1405d1550(&var_50)
    
    if ((rdi_5 & 0x40) != 0)
        sub_1405d1550(&var_48)
    
    int64_t rcx_38 = *(data_143f10dc8 + 0x18)
    void* rax_63 = *(arg2 + 0x28)
    
    if (rax_63 != 0)
        void* rax_64 = *(rax_63 + 0x78)
        
        if (rax_64 != 0)
            r15 = *(rax_64 + 0x18)
    
    if (r15 != 0)
        rcx_38 = r15
    
    arg4[0xc] = rcx_38
    arg4[0xd] = *(data_143f10e68 + 0x10)
    rax_17 = data_143f10e68
    arg4[0xe] = *(rax_17 + 0x10)
else
    void* r15_1 = *(arg2 + 0x20)
    
    if (r15_1 != 0 && arg3 != 0)
        arg4[4] = (*(*arg3 + 0x10))(arg3, 0, 0)
        arg4[5] = (*(*arg3 + 0x10))(arg3, 1, 0)
        int64_t rax_24
        
        if (sub_142436990(r15_1, 3) == 0xffffffff)
            rax_24 = *(data_143f10bc8 + 0x48)
        else
            rax_24 = (*(*arg3 + 0x10))(arg3, 3, 0)
        
        arg4[6] = rax_24
        int64_t rax_28
        
        if (sub_142436990(r15_1, 4) == 0xffffffff)
            rax_28 = *(data_143f10cc8 + 0x48)
        else
            rax_28 = (*(*arg3 + 0x10))(arg3, 4, 0)
        
        arg4[7] = rax_28
        int64_t rax_32
        
        if (sub_142436990(r15_1, 2) == 0xffffffff)
            rax_32 = *(data_143f10bc8 + 0x48)
        else
            rax_32 = (*(*arg3 + 0x10))(arg3, 2, 0)
        
        arg4[8] = rax_32
        int64_t rax_35 = (**arg3)(arg3, 0)
        int64_t rdi_1 = rax_35
        arg4[0xd] = rax_35
        
        if ((*(*arg3 + 0x20))(arg3) u> 1)
            rdi_1 = (**arg3)(arg3, 1)
        
        arg4[0xe] = rdi_1
        arg4[9] = data_143a2fe48
        arg4[0xa] = data_143a2fe48
        arg4[0xb] = data_143a2fe48
        int64_t rax_43 = data_143a2fe48
        arg4[0xc] = rax_43
        return rax_43

return rax_17

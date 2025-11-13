// 函数: sub_142687db0
// 地址: 0x142687db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
char rdx = 0
int64_t var_148
var_148.d = 0
*arg2 = data_143dbb1f8.q
arg2[1].d = data_143dbb200
arg2[2] = 0

if (*(arg1 + 0x4a8) != 0)
    int64_t* rdi_1 = arg3[1]
    void* r15_1 = *arg3
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* var_110
    int64_t* rcx
    
    if (r15_1 != 0)
        rcx = var_110
    else
        rdx = (r15_1 + 1).b
        r15_1 = *(arg1 + 0x338)
        rcx = *(arg1 + 0x340)
        var_110 = rcx
        
        if (rcx != 0)
            rcx[1].d += 1
            rcx = var_110
    
    if ((rdx & 1) != 0 && rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**var_110)(var_110)
            int32_t rax_5 = *(var_110 + 0xc)
            *(var_110 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_110 + 8))(var_110, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_9 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rdi_2 = *(arg1 + 0x4a8)
    uint64_t var_130_1 = data_143dbb1f8.q
    int32_t var_128_1 = data_143dbb200
    int64_t var_120_1 = 0
    
    if (rdi_2[1] != 0)
        int64_t* rcx_5 = *rdi_2
        void* rax_13 = (*(*rcx_5 + 0x150))(rcx_5)
        void* const rbx_2
        
        if (rax_13 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = *(rax_13 + 0x120)
            
            if (rbx_2 == 0)
                rbx_2 = nullptr
            else
                void* rax_14 = sub_14269bba0()
                void* rdx_1 = *(rbx_2 + 0x10)
                int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                
                if (rax_15.d s> *(rdx_1 + 0x38)
                        || *(*(rdx_1 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
                    rbx_2 = nullptr
        
        void** const var_108 = &data_143459760
        void* const var_100_1 = rbx_2
        void var_f8
        sub_140d3a3a0(&var_f8, arg4)
        int64_t var_f0_1 = 0
        void var_e8
        sub_1426022c0(&var_e8)
        uint32_t rax_17
        void* rbx_3
        
        if (data_143de5480 != 0)
            rbx_3 = &var_e8
            rax_17.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_17.b != 0)
            rbx_3 = &rdi_2[0xc]
        
        uint128_t zmm0 = sub_142611af0(rbx_3, rdi_2[1], *(r15_1 + 0x20), &var_108)
        void* rdx_4 = *(r15_1 + 0x10)
        int32_t var_68
        
        if (rdx_4 != 0 && rdx_4 != -8 && (
                (sub_14260c5b0(rbx_3, rdx_4 + 8, sub_142681500, &var_148, zmm0, &var_68) u>> 0x1e).b
                & 1) != 0)
            int32_t var_64
            int32_t var_128_2 = var_64.d
            var_120_1 = var_148
            int32_t var_60
            var_130_1 = (_mm_unpacklo_ps(var_68 ^ data_142d3f780, (var_60 ^ data_142d3f780).q)).q
        
        sub_142602500(&var_e8)
    
    arg5 = zx.o(var_120_1)
    *arg2 = var_130_1.o
    arg2[2] = arg5.q

int64_t* rbx_4 = arg3[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        int64_t r8_2 = *rbx_4
        (*r8_2)(rbx_4, arg5, r8_2)
        int32_t rsi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_3 = *rbx_4
            (*(r8_3 + 8))(rbx_4, zx.q(rsi_1), r8_3)

__security_check_cookie(rax_1 ^ &var_178)
return arg2

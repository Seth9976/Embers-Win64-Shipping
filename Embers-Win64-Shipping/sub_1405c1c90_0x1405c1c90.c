// 函数: sub_1405c1c90
// 地址: 0x1405c1c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx

if (arg2 != 0)
    rcx = arg1[0xf]

if (arg2 == 0 || rcx == 0)
    int64_t* rcx_17 = arg1[0x10]
    
    if (rcx_17 != 0)
        sub_1405db200(rcx_17, 0)
    
    arg1[0x10] = 0
    return 

int64_t rax_1 = *rcx
int32_t arg_10 = 0xa

if (sub_1405be4b0((*(rax_1 + 0x270))(rcx), &arg_10).b == 0)
    return 

int64_t* rcx_2 = arg1[0xf]
uint64_t arg_20
(*(*rcx_2 + 0x268))(rcx_2, &arg_20)
uint64_t rdx_2 = arg_20
int32_t rcx_3 = arg_20:4.d
uint64_t rax = zx.q(rcx_3)

if (rdx_2.d s>= rcx_3)
    rax = zx.q(rdx_2.d)

if (rax.d u> data_1439c7a78)
    return 

if (rdx_2.d s<= rcx_3)
    rcx_3 = rdx_2.d

if (rcx_3 s<= 0)
    return 

int64_t* rcx_4 = arg1
int64_t* r14_1
int32_t r8_2

if (arg1[0xd] == 0)
    r8_2 = arg_10
label_1405c1d7c:
    int64_t* rax_7 = sub_1405c43e0(rcx_4, rdx_2, r8_2)
    r14_1 = rax_7
    sub_1405b6d00(arg1, arg2, rax_7)
else
    int32_t rsi_1 = arg_10
    int32_t var_68_1 = rsi_1
    int64_t* rax_4 = sub_1405b36f0(rcx_4, arg2, arg3, rdx_2.d)
    r14_1 = rax_4
    void* rax_5
    int64_t rax_6
    void* rdx_4
    
    if (rax_4 != 0)
        rax_5 = sub_1425b6f00()
        rdx_4 = r14_1[2]
        rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_4 == 0 || rax_6.d s> *(rdx_4 + 0x38)
            || *(*(rdx_4 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
        rdx_2 = arg_20
        r8_2 = rsi_1
        rcx_4 = arg1
        goto label_1405c1d7c

if (arg1[0x10] == 0 && r14_1 != 0 && arg1[0xf] != 0)
    int32_t var_28_1 = 0xffffffff
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    sub_140d3cc80(sub_1405c8080(), &var_38, 1, 0x10, 0)
    int32_t rdx_7 = var_30_1
    int64_t r8_5 = var_38
    int32_t rcx_8 = var_28_1 + 1
    int32_t var_28_2 = rcx_8
    uint64_t rax_9
    
    if (rcx_8 s< rdx_7)
        while (*(r8_5 + (sx.q(rcx_8) << 3)) == 0)
            rax_9 = zx.q(rcx_8 + 1)
            var_28_2 = rax_9.d
            rcx_8 = rax_9.d
            
            if (rax_9.d s>= rdx_7)
                break
    
    while (true)
        if (rcx_8 s< 0 || rcx_8 s>= rdx_7)
            rax_9.b = 0
        else
            rax_9.b = 1
        
        if (rax_9.b == 0)
            break
        
        int64_t* rbx_1 = *(r8_5 + (sx.q(rcx_8) << 3))
        
        if (rbx_1 != 0)
            if (sub_140d23dc0(rbx_1, 0x30) == 0 && rbx_1 != arg1 && rbx_1[0xf] == arg1[0xf]
                    && rbx_1[5].b != 0)
                rbx_1[5].b = 0
                sub_1405c9640(rbx_1)
            
            r8_5 = var_38
            rdx_7 = var_30_1
            rcx_8 = var_28_2
        
        rax_9 = zx.q(rcx_8 + 1)
        var_28_2 = rax_9.d
        rcx_8 = rax_9.d
        
        if (rax_9.d s< rdx_7)
            while (*(r8_5 + (sx.q(rcx_8) << 3)) == 0)
                rax_9 = zx.q(rcx_8 + 1)
                var_28_2 = rax_9.d
                rcx_8 = rax_9.d
                
                if (rax_9.d s>= rdx_7)
                    break
    
    if (r8_5 != 0)
        sub_140a74f90(r8_5)
    
    rax = sub_1405d8ad0(arg1[0xf])
    arg1[0x10] = rax
    
    if (rax != 0)
        void var_48
        char* rax_13 = sub_1405d51f0(&var_48)
        int64_t* rcx_14 = arg1[0x10]
        int128_t var_58 = *rax_13
        sub_1405d7390(rcx_14, r14_1, &var_58)

int64_t* rcx_15 = arg1[0x10]

if (rcx_15 == 0)
    return 

rax.b = (*(*rcx_15 + 0x260))(rcx_15).b - 1

if (rax.b u<= 1)
    sub_1405db520(arg1[0x10], r14_1)

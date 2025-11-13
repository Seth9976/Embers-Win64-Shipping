// 函数: sub_140db57d0
// 地址: 0x140db57d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r13 = 0
int32_t arg_8 = 0
*arg2 = 0
arg2[1].b = 0

if (*(arg3 + 0x31) != 0)
    void* rdx = *(arg3 + 0x20)
    int64_t i = arg1[0x6c]
    arg_8.q = rdx
    int64_t* rsi_1 = rdx + 0x750
    int64_t* rax_1 = rsi_1[4]
    int64_t* rcx = rsi_1
    int64_t r15_1 = sx.q(rsi_1[5].d)
    
    if (rax_1 != 0)
        rcx = rax_1
    
    int64_t* rbx_1 = rcx
    void* rax_2 = &rcx[r15_1]
    int32_t rbx_3
    
    if (rcx != rax_2)
        while (*rbx_1 != i)
            rbx_1 = &rbx_1[1]
            
            if (rbx_1 == rax_2)
                goto label_140db586c
        
        rbx_3 = ((rbx_1 - rcx) s>> 3).d
    
    if (rcx == rax_2 || rbx_3 == 0xffffffff)
    label_140db586c:
        int32_t rax_3 = (r15_1 + 1).d
        rsi_1[5].d = rax_3
        
        if (rax_3 s> *(rsi_1 + 0x2c))
            sub_14083a490(rsi_1, r15_1.d)
            rdx = arg_8.q
        
        int64_t* rax_4 = rsi_1[4]
        rbx_3 = r15_1.d
        
        if (rax_4 != 0)
            rsi_1 = rax_4
        
        rsi_1[r15_1] = i
    
    void* rsi_2 = rdx + 0x780
    int64_t r14_1 = sx.q(*(rsi_2 + 0x18))
    int32_t rax_5 = (r14_1 + 1).d
    *(rsi_2 + 0x18) = rax_5
    
    if (rax_5 s> *(rsi_2 + 0x1c))
        sub_140dbc4b0(rsi_2, r14_1.d)
    
    void* rax_6 = *(rsi_2 + 0x10)
    
    if (rax_6 != 0)
        rsi_2 = rax_6
    
    *(rsi_2 + (r14_1 << 2)) = rbx_3

int64_t* rcx_3 = arg1[0x6d]
void* rax_9

if ((*(*rcx_3 + 0x208))(rcx_3) == 0)
    int64_t* rcx_4 = arg1[0x6d]
    int64_t* rax_11 = (*(*rcx_4 + 0x190))(rcx_4)
    r13 = 1
    int64_t r9_1 = *rax_11
    void var_78
    rax_9 = (*(r9_1 + 0x10))(rax_11, &var_78, 0, r9_1)
else
    rax_9 = &arg1[0x6d]

int64_t* r15_2 = *rax_9
int64_t* var_70

if ((r13 & 1) != 0 && var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp2_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_70 + 8))(var_70, 1)

if (*(arg1 + 0x382) != 0)
    void* rax_14 = *(arg3 + 0x10)
    int64_t* r8 = arg1[2]
    void* r9_4 = &r8[sx.q(arg1[3].d) * 4]
    float zmm8[0x4] = *(rax_14 + 0x10)
    int128_t zmm9 = *(rax_14 + 0x14)
    
    if (r8 != r9_4)
        float zmm6[0x4]
        float var_38_1[0x4] = zmm6
        int128_t zmm7
        int128_t var_48_1 = zmm7
        
        do
            void* rax_15 = *r8
            
            if (rax_15 != 0)
                if (rax_15 + 0xc0 != rax_15 + 0x88)
                    *(rax_15 + 0xc0) = *(rax_15 + 0x88)
                    *(rax_15 + 0xd0) = *(rax_15 + 0x98)
                    *(rax_15 + 0xe0) = *(rax_15 + 0xa8)
                    *(rax_15 + 0xf0) = *(rax_15 + 0xb8)
                
                float zmm0[0x4] = *(rax_15 + 0xdc)
                int64_t zmm5_1 = *(rax_15 + 0xf0)
                zmm8[0] = zmm8[0] f+ *(rax_15 + 0xec)
                zmm7 = *(rax_15 + 0xd0)
                zmm5_1.d = zmm5_1.d f+ zmm9.d
                *(rax_15 + 0xdc) = zmm0
                float var_88_1[0x4] = zmm0
                zmm7.d = zmm7.d f+ zmm9.d
                zmm8[0] = zmm8[0] f+ *(rax_15 + 0xcc)
                *(rax_15 + 0xec) = (_mm_unpacklo_ps(zmm8, zmm5_1)).q
                *(rax_15 + 0xd0) = zmm7.d
                *(rax_15 + 0xcc) = zmm8[0]
            
            r8 = &r8[4]
        while (r8 != r9_4)
    
    *(arg1 + 0x382) = 0

char rax_16 = data_143e20cf4

if (*(r15_2 + 0x2d) == 0)
    if (data_143e20cf8 == 0 || data_1439ae504 == 0)
        rax_16 = 0
    else
        TEB* gsbase
        
        if (data_143e24330
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e24330)
            
            if (data_143e24330 == 0xffffffff)
                data_143e24320 = data_143de5458
                data_143e24329 = 0
                atexit(sub_142cca260)
                _Init_thread_footer(&data_143e24330)
        
        if (data_143e24329 == 0 || data_143e24320 != data_143de5458)
            char* rax_20 = sub_140a752e0()
            int64_t* rbx_5 = *(rax_20 + 0x30)
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
            
            bool cond:4_1 = sub_140a810c0(*(rax_20 + 0x28)) != 0
            data_143e24329 = 1
            int64_t rax_22 = data_143de5458
            data_143e24328 = cond:4_1
            data_143e24320 = rax_22
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t rsi_3 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (rsi_3 == 1)
                        (*(*rbx_5 + 8))(rbx_5, zx.q(rsi_3))
        
        rax_16 = data_143e24328

char rsi_5 = data_143e20cf4
data_143e20cf4 = rax_16

if (*(arg3 + 0x31) == 0 || *(arg1 + 0x381) != 0 || data_143e24362 != 0)
    sub_140d9b5c0(arg1, 0)
    data_143e24361 = 0
    arg1[0x70].w = 0
    
    if (*(arg3 + 0x31) != 0)
        char rbx_6 = data_143e24362
        data_143e24362 = 1
        int128_t zmm0_1 = sub_140d9a8b0(arg1, r15_2)
        
        if (data_143e24360 != 0)
            sub_140e25880(arg1[0x6d], *(arg3 + 0x28), zmm0_1)
        
        data_143e24362 = rbx_6
    
    *(arg1 + 0x37c) = (*(*arg1 + 0x20))(arg1, arg3)
    arg2[1].b = 1
else if (arg1[3].d != 0)
    arg2[1].b = sub_140db55f0(arg1, arg3)

if (*(arg3 + 0x31) != 0)
    void* rcx_20 = *(arg3 + 0x20) + 0x780
    *(rcx_20 + 0x18) -= 1
    sub_140dbcee0(rcx_20)

arg1[0x6b].d = 0

if (*(arg1 + 0x35c) != 0)
    sub_140dbd1e0(&arg1[0x38], 0)

*arg2 = *(arg1 + 0x37c)
data_143e20cf4 = rsi_5
return arg2

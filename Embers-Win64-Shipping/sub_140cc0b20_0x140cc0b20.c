// 函数: sub_140cc0b20
// 地址: 0x140cc0b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8 = arg2
int64_t rbx

if (sub_140b011d0().b == 0)
    rbx.b = 0
else if (sub_140a54810().b == 0)
    rbx.b = 0
else if (sub_140b70ca0() s< 2 || data_1439a9d7c == 0 || data_143e1b1e8 == 0)
    rbx.b = 0
else
    rbx.b = 1

int64_t* rcx = data_143e1b388
int32_t i_1 = 0
uint128_t zmm6

if (rcx != 0)
    int32_t rax
    rax.b = rcx[1] != 0
    
    if (rax.b != rbx.b)
        (*(*rcx + 0x28))(rcx, 1)
        void*** rax_4 = j_sub_140a82f30(0xc0)
        
        if (rax_4 == 0)
            data_143e1b388 = 0
        else
            int64_t* rax_5
            rax_5, zmm6 = sub_140cacca0(rax_4, rbx.b)
            data_143e1b388 = rax_5
else
    void*** rax_1 = j_sub_140a82f30(0xc0)
    
    if (rax_1 == 0)
        data_143e1b388 = 0
    else
        int64_t* rax_2
        rax_2, zmm6 = sub_140cacca0(rax_1, rbx.b)
        data_143e1b388 = rax_2

int64_t r12
r12.b = 0
uint64_t r14
uint64_t var_38 = r14
uint128_t var_48 = zmm6
char arg_18 = 0
int64_t performanceCount_4[0x2]
QueryPerformanceCounter(&performanceCount_4)
bool z

if (0 == data_143e1adfc)
    data_143e1adfc = 0
    z = true
else
    data_143e1adfc
    z = false

int512_t zmm0 = sub_140d3e210()
data_143e1adfc
data_143e1adfc = 1
uint128_t zmm7 = 0x4170000000000000

if (data_143e1b320 != 0)
label_140cc0f86:
    
    if (data_1439a9dd0 != 0)
        void* rbx_4 = data_143e1b388
        int64_t* rcx_19 = *(rbx_4 + 0x20)
        
        if ((*(*rcx_19 + 0x20))(rcx_19, 0xffffffff, 0) != 0)
            int64_t* rcx_20 = *(rbx_4 + 0x20)
            (*(*rcx_20 + 0x18))(rcx_20)
            int64_t* rcx_21 = *(rbx_4 + 0x18)
            *(rbx_4 + 0x28) = 0
            *(rbx_4 + 0xb8) = 0
            (*(*rcx_21 + 0x10))(rcx_21)
        
        data_1439a9dd0 = 0
    
    void* rsi = data_143e1b388
    
    if (*(rsi + 8) != 0)
        if (arg1 == 0)
            int64_t* rcx_23 = *(rsi + 0x20)
            (*(*rcx_23 + 0x20))(rcx_23, 0xffffffff, 0)
        
        goto label_140cc101c
    
    uint128_t entry_zmm3 = zx.o(data_143e1ade0)
    *(rsi + 0x2c) = data_143e1ae18
    char rax_37
    int64_t r8_1
    rax_37, r8_1, zmm7, zmm8 = sub_140ccfee0(rsi, arg1, zmm8, entry_zmm3)
    
    if (rax_37 != 0)
    label_140cc101c:
        int32_t rbx_5 = 0
        r14.b = 1
        
        while (true)
            int32_t rax_39
            rax_39, r8_1 = sub_140a2d3e0(rsi + 0x30)
            
            if (rax_39 == 0)
                break
            
            int64_t* rdi_3 = *(*(&data_143cf0bf8 + (zx.q(rax_39) u>> 0xe << 3))
                + (zx.q(rax_39) & 0x3fff) * 0x18 + 8)
            r8_1, zmm6 = sub_140a24050(rax_39)
            
            if (rdi_3 == 0)
                break
            
            (**rdi_3)(rdi_3, 0)
            sub_140d203e0(&data_143e1d658, rdi_3)
            rbx_5 += 1
            
            if (arg1 != 0 && rbx_5 == 0x64 && (*(rsi + 0x70) & 0x3ffffff) != 0)
                rbx_5 = 0
                int64_t performanceCount_3
                QueryPerformanceCounter(&performanceCount_3)
                
                if (not(float.d(performanceCount_3) f* data_143d796f8 f+ zmm7.q f- zmm6.q
                        f<= fconvert.d(zmm8.d)))
                    r14.b = 0
                    break
        
        if (*(rsi + 8) == 0 && r14.b != 0)
            int64_t* rcx_31 = *(rsi + 0x20)
            (*(*rcx_31 + 0x10))(rcx_31)
    
    void* rbx_6 = data_143e1b388
    
    if (*(rbx_6 + 8) != 0)
        int64_t* rcx_32 = *(rbx_6 + 0x20)
        r8_1.b = 1
        
        if ((*(*rcx_32 + 0x20))(rcx_32, 0, r8_1, entry_zmm3) != 0
                && (*(rbx_6 + 0x70) & 0x3ffffff) == 0)
            rbx_6 = data_143e1b388
        label_140cc112c:
            arg_18 = 1
            data_143e1b320 = 0
            data_143e1b328 = 0
            data_1439a9dd0 = 1
            *(rbx_6 + 0xb8) = 0
    else if (*(rbx_6 + 0x28) s>= *(rbx_6 + 0x2c) && (*(rbx_6 + 0x70) & 0x3ffffff) == 0)
        goto label_140cc112c
else
    int32_t rbp_1 = 0
    int32_t r13_1 = 0
    int32_t i
    
    if (data_1439a9dd0 == 0)
        i = data_143e1b32c
    else
        i = 0
        data_143e1b32c = 0
        data_1439a9dd0 = 0
    
    while (i s< data_143e1ae18)
        int64_t* rdi_1 = **(data_143e1ae10 + (sx.q(i) << 3))
        
        if ((*(*rdi_1 + 0x88))(rdi_1) == 0)
            int64_t rbx_1 = sx.q(data_143e1ae08)
            int32_t rax_10 = (rbx_1 + 1).d
            bool cond:2_1 = rax_10 s<= data_143e1ae0c
            data_143e1ae08 = rax_10
            
            if (not(cond:2_1))
                zmm0 = sub_1405a4d70(&data_143e1ae00)
            
            int64_t rax_11 = data_143e1ae00
            data_143e1b324 += 1
            *(rax_11 + (rbx_1 << 3)) = rdi_1
        else
            sub_140cd85b0(rdi_1, zmm0)
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = muls.dp.d(0x66666667, rbp_1)
        i = data_143e1b32c + 1
        int32_t rdx_5 = temp1_1 s>> 2
        data_143e1b32c = i
        int32_t rdx_7 = rbp_1
        rbp_1 += 1
        
        if (arg1 != 0 && rdx_7 - (rdx_5 + (rdx_5 u>> 0x1f)) * 0xa == 0)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            zmm0.o = zx.o(0)
            zmm0.q = fconvert.d(zmm8.d)
            
            if (float.d(performanceCount) f* data_143d796f8 f+ zmm7.q f- data_143e1ade0 f> zmm0.q)
                r12.b = 1
                
                if (data_143e1b32c s< data_143e1ae18)
                    goto label_140cc0f69
                
                goto label_140cc0d85
            
            i = data_143e1b32c
    
label_140cc0d85:
    
    if (data_143e1b324 s> 0)
        zmm6 = 0x4024000000000000
        
        do
            r14 = zx.q(data_143e1b324)
            
            if (r14.d s> 0)
                int64_t* rbx_2 = nullptr
                
                do
                    int64_t* rdi_2 = *(rbx_2 + data_143e1ae00)
                    
                    if ((*(*rdi_2 + 0x88))(rdi_2) == 0)
                        i_1 += 1
                        rbx_2 = &rbx_2[1]
                    else
                        sub_140cd85b0(rdi_2, zmm0)
                        int64_t rcx_12 = data_143e1ae00
                        int32_t rdx_10 = data_143e1b324 - 1
                        *(rbx_2 + rcx_12) = *(rcx_12 + (sx.q(rdx_10) << 3))
                        data_143e1b324 = rdx_10
                    
                    int32_t rcx_13 = rbp_1
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = muls.dp.d(0x66666667, rbp_1)
                    rbp_1 += 1
                    int32_t rdx_12 = temp5_1 s>> 2
                    
                    if (arg1 != 0 && rcx_13 - (rdx_12 + (rdx_12 u>> 0x1f)) * 0xa == 0)
                        int64_t performanceCount_1
                        QueryPerformanceCounter(&performanceCount_1)
                        zmm0.o = zx.o(0)
                        zmm0.q = fconvert.d(zmm8.d)
                        
                        if (float.d(performanceCount_1) f* data_143d796f8 f+ zmm7.q
                                f- data_143e1ade0 f> zmm0.q)
                            r12.b = 1
                            break
                while (i_1 s< data_143e1b324)
            
            if (arg1 != 0)
                break
            
            int32_t rcx_16 = data_143e1b324
            
            if (rcx_16 s<= 0)
                break
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = muls.dp.d(0x66666667, r13_1)
            int32_t rdx_15 = temp3_1 s>> 2
            int32_t rdx_17 = r13_1
            r13_1 += 1
            
            if (r14.d != rcx_16 || rdx_17 - (rdx_15 + (rdx_15 u>> 0x1f)) * 0xa != 0)
                i_1 = 0
            else
                int64_t performanceCount_2
                QueryPerformanceCounter(&performanceCount_2)
                zmm0.o = zx.o(0)
                i_1 = 0
                zmm0.q = float.d(performanceCount_2)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ zmm7.q
                zmm0.q = zmm0.q f- data_143e1ade0
                
                if (not(zmm0.q f<= zmm6.q))
                    int32_t i_2 = 0
                    
                    if (data_143e1b324 s> 0)
                        int64_t* rbx_3 = nullptr
                        
                        do
                            int64_t* rcx_18 = *(rbx_3 + data_143e1ae00)
                            (*(*rcx_18 + 0x88))(rcx_18)
                            i_2 += 1
                            rbx_3 = &rbx_3[1]
                        while (i_2 s< data_143e1b324)
            
            zmm0.o = zx.o(0)
            zmm0, zmm6 = sub_140b73230(zmm0.o)
        while (data_143e1b324 s> 0)
    
    if (data_143e1b324 == 0)
        bool cond:3_1 = data_143e1ae0c == 0x100
        data_143e1ae08 = 0
        
        if (not(cond:3_1))
            sub_1405c5570(&data_143e1ae00, 0x100)
        
        data_143e1b320 = 1
        data_1439a9dd0 = 1
        goto label_140cc0f76
    
label_140cc0f69:
    
    if (data_143e1b320 != 0)
    label_140cc0f76:
        
        if (r12.b == 0)
            goto label_140cc0f86

data_143e1adfc
data_143e1adfc = zx.d(not(z))
sub_140d40c40()
return zx.q(arg_18)

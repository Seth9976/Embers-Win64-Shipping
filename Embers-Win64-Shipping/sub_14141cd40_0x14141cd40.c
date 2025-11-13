// 函数: sub_14141cd40
// 地址: 0x14141cd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t r12 = data_14399e5e0

if (*(arg1 + 0x79) != 0)
    int64_t* i = arg1[0x12]
    
    for (void* rbp_1 = &i[sx.q(arg1[0x13].d)]; i != rbp_1; i = &i[1])
        int64_t* rax_3 = sub_140a242a0()
        void* rcx = *i
        void** var_50_1 = nullptr
        int32_t var_44_1 = 4
        int32_t j_2 = 1
        void* var_70 = rcx
        
        if (rcx != 0)
            *(rcx + 0x48) += 1
        
        (*(*rax_3 + 0x48))(rax_3, &var_70, zx.q(r12), rax_3)
        void** rcx_2 = var_50_1
        void** rbx_1 = &var_70
        int32_t j_1 = j_2
        
        if (rcx_2 != 0)
            rbx_1 = rcx_2
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t* rcx_3 = *rbx_1
                
                if (rcx_3 != 0)
                    rcx_3[9].d -= 1
                    
                    if (rcx_3[9].d == 1)
                        sub_140a2f6e0(rcx_3)
                
                rbx_1 = &rbx_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_2 = var_50_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)

char r8

if (arg1[0x16].b == 0 || arg1[0x11].d s< *(data_143ed2dd0 + 4))
    r8 = 0
else
    int32_t* i_1 = arg1[0x14]
    r8 = 1
    int32_t rdx_1 = 0
    
    for (; i_1 != &i_1[sx.q(arg1[0x15].d)]; i_1 = &i_1[1])
        int32_t rax_8 = *i_1
        
        if (rax_8 s< 0)
            goto label_14141ceb1
        
        rdx_1 += rax_8
    
    r8 = 1
    
    if (rdx_1 s< *(arg1 + 0x74))
        r8 = 0

label_14141ceb1:
int32_t r9_3 = arg1[0x11].d

if (r8 == 0)
    int32_t i_2 = 0
    
    if (r9_3 s> 0)
        int64_t rdi_1 = 0
        
        do
            arg3, arg4 = sub_14197bcb0(arg1[0xb], arg1[0x12] + (sx.q(i_2) << 3), 
                *(arg1[0x10] + rdi_1), arg4, arg3)
            arg1[0xe].d -= 1
            rdi_1 += 8
            i_2 += 1
        while (i_2 s< arg1[0x11].d)
else
    arg1[0xe].d -= r9_3
    sub_14197be60(arg1[0xb], arg1[0x12], arg2, arg1[0x10], arg3, arg4, arg1[0x14], r9_3, 
        (*(arg1 + 0x74) << 2) s/ 3, *(arg1 + 0x79))
    (*(*arg1 + 8))(arg1, arg1[0xb])
    sub_141096650(arg1[0xb])

int32_t rax_15 = *(arg1 + 0x8c)
arg1[0x11].d = 0

if (rax_15 s< 0 && rax_15 != 0)
    sub_14083ad10(&arg1[0x10], 0)

arg1[0xc] = 0
int32_t rax_16 = *(arg1 + 0x9c)
int64_t* rbx_2 = arg1[0x12]
int32_t i_5 = arg1[0x13].d

if (rax_16 s< 0)
    if (i_5 != 0)
        int32_t i_3
        
        do
            int64_t* rcx_14 = *rbx_2
            
            if (rcx_14 != 0)
                rcx_14[9].d -= 1
                
                if (rcx_14[9].d == 1)
                    sub_140a2f6e0(rcx_14)
            
            rbx_2 = &rbx_2[1]
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
        rax_16 = *(arg1 + 0x9c)
    
    arg1[0x13].d = 0
    
    if (rax_16 != 0)
        sub_14083ad10(&arg1[0x12], 0)
else
    if (i_5 != 0)
        int32_t i_4
        
        do
            int64_t* rcx_13 = *rbx_2
            
            if (rcx_13 != 0)
                rcx_13[9].d -= 1
                
                if (rcx_13[9].d == 1)
                    sub_140a2f6e0(rcx_13)
            
            rbx_2 = &rbx_2[1]
            i_4 = i_5
            i_5 -= 1
        while (i_4 != 1)
    
    arg1[0x13].d = 0

int64_t* rax_19 = sub_140a242a0()
int64_t r8_5 = *rax_19
int64_t result = (*(r8_5 + 0x30))(rax_19, zx.q(r12), r8_5)
__security_check_cookie(rax_1 ^ &var_b8)
return result

// 函数: sub_142c847c0
// 地址: 0x142c847c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_988
int64_t rax_1 = __security_cookie ^ &var_988
void var_8b8
memset(&var_8b8, 0, 0x80)
void var_938
memset(&var_938, 0, 0x80)
void* r15 = *arg1
void* rbx = *(r15 + 0x250)
int512_t entry_zmm2
int512_t zmm2 =
    sub_142c83d40(r15, 0x3c, rbx + 0x1cb8, *(rbx + 0x1ec0) - *(rbx + 0x1eb8) + 2, entry_zmm2)
char* rax_2 = *(rbx + 0x1eb8)
uint32_t rcx_3 = zx.d(*rax_2)
void* result = &rax_2[1]
*(rbx + 0x1eb8) = result
void buf
void var_836
int64_t rbx_1

if (rcx_3 == 0x18)
    rbx_1 = -1
    bool cond:0_1
    
    do
        cond:0_1 = *(rbx + 0x1c08 + rbx_1 + 1) != 0
        rbx_1 += 1
    while (cond:0_1)
    int32_t var_940_2 = 0xf0
    int32_t var_948_2 = 0xff
    void* var_950_2 = rbx + 0x1c08
    int64_t var_958_4 = 0
    int32_t var_960_4 = 0x18
label_142c84a97:
    int32_t var_968_3 = 0xfa
    int512_t zmm2_3 = sub_142c564b0(&buf, 0x800, "%c%c%c%c%s%c%c", 0xff, zmm2)
    
    if (send(arg1[0x47], &buf, (rbx_1 + 6).d, 0) s< 0)
        zmm2_3 = sub_142c64760(r15, "Sending data failed (%d)", zx.q(WSAGetLastError()), zmm2_3)
    
    result = sub_142c83d40(r15, 0x3e, &var_836, rbx_1 + 4, zmm2_3)
else
    if (rcx_3 == 0x23)
        rbx_1 = -1
        bool cond:1_1
        
        do
            cond:1_1 = *(rbx + 0x1c28 + rbx_1 + 1) != 0
            rbx_1 += 1
        while (cond:1_1)
        int32_t var_940_1 = 0xf0
        int32_t var_948_1 = 0xff
        void* var_950_1 = rbx + 0x1c28
        int64_t var_958_3 = 0
        int32_t var_960_3 = 0x23
        goto label_142c84a97
    
    if (rcx_3 == 0x27)
        int64_t var_958_1 = 0
        uint32_t var_960_1 = rcx_3
        int32_t var_968_1 = 0xfa
        int512_t zmm2_1 = sub_142c564b0(&buf, 0x800, "%c%c%c%c", 0xff, zmm2)
        int64_t* i = *(rbx + 0x1cb0)
        int64_t rsi_1 = 4
        
        for (; i != 0; i = i[1])
            char* rcx_5 = *i
            int64_t rax_3 = -1
            bool cond:2_1
            
            do
                cond:2_1 = rcx_5[rax_3 + 1] != 0
                rax_3 += 1
            while (cond:2_1)
            int64_t rbp_2 = rax_3 + 1 + rsi_1
            
            if (rbp_2 u< 0x7fa && sub_1425f29b0(rcx_5, "%127[^,],%127s", &var_8b8) != 0)
                void* var_958_2 = &var_938
                int32_t var_960_2 = 1
                var_968_1.q = &var_8b8
                zmm2_1 = sub_142c564b0(&buf + rsi_1, 0x800 - rsi_1, "%c%s%c%s", 0, zmm2_1)
                rsi_1 = rbp_2
        
        int32_t var_968_2 = 0xf0
        int512_t zmm2_2 = sub_142c564b0(&buf + rsi_1, 0x800 - rsi_1, "%c%c", 0xff, zmm2_1)
        
        if (send(arg1[0x47], &buf, (rsi_1 + 2).d, 0) s< 0)
            zmm2_2 = sub_142c64760(r15, "Sending data failed (%d)", zx.q(WSAGetLastError()), zmm2_2)
        
        result = sub_142c83d40(r15, 0x3e, &var_836, rsi_1, zmm2_2)
__security_check_cookie(rax_1 ^ &var_988)
return result

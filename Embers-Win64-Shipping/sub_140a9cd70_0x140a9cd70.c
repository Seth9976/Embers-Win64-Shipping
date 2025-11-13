// 函数: sub_140a9cd70
// 地址: 0x140a9cd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[1]

if (rsi == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rsi[1].d)
    rsi[1].d = 0
    z_1 = true
else
    rax = rsi[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rsi[1].d)
        rsi[1].d = rax + 1
        z_2 = true
    else
        rsi[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rsi[1].d)
        rsi[1].d = 0
        z_3 = true
    else
        rax = rsi[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rsi == 0)
    return 

int64_t* r14_1 = *arg1

if (r14_1 != 0)
    int32_t r8 = EnterCriticalSection(&r14_1[9])
    
    if (arg3 != 0)
        r14_1[3] = arg3
    
    r14_1[6].b = 2
    int16_t* rax_1 = r14_1[2]
    
    if (rax_1 != 0)
        *rax_1 = 0
    
    void var_28
    sub_140ac1340(r14_1, &var_28, r8)
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rax_4 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    if (r14_1 != -0x48)
        LeaveCriticalSection(&r14_1[9])

rsi[1].d -= 1

if (rsi[1].d != 1)
    return 

(**rsi)(rsi)
int32_t rbp_1 = *(rsi + 0xc)
*(rsi + 0xc) -= 1

if (rbp_1 == 1)
    (*(*rsi + 8))(rsi, zx.q(rbp_1))

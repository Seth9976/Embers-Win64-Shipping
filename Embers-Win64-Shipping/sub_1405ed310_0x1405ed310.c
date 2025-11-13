// 函数: sub_1405ed310
// 地址: 0x1405ed310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
uint64_t var_30 = 0
int64_t* rdi = arg1[0xc]
int64_t* var_28 = rdi

if (rdi != 0)
    uint64_t rax = 0
    bool z_1
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_1 = true
    else
        rax = zx.q(rdi[1].d)
        z_1 = false
    
    if (z_1)
    label_1405ed363:
        rdi = nullptr
        var_28 = nullptr
    else
        while (true)
            bool z_2
            
            if (rax.d == rdi[1].d)
                rdi[1].d = (rax + 1).d
                z_2 = true
            else
                rdi[1].d
                z_2 = false
            
            if (z_2)
                rdi = var_28
                
                if (rdi != 0)
                    var_30 = arg1[0xb]
                
                break
            
            rax = 0
            bool z_3
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_3 = true
            else
                rax = zx.q(rdi[1].d)
                z_3 = false
            
            if (z_3)
                goto label_1405ed363

if (var_30 != 0)
    int64_t var_20 = *arg1
    void* rax_2 = arg1[1]
    void* var_18_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
        rdi = var_28
    
    int64_t* arg_10
    sub_1405fe230(&arg_10, &var_20, &arg1[2], arg1[4].b)
    int64_t* rbx_1 = arg_10
    sub_1405fa9d0(var_30, rbx_1, &arg1[2], &arg1[5])
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x10))(rbx_1)

if (rdi == 0)
    return 

rdi[1].d -= 1

if (rdi[1].d != 1)
    return 

(**var_28)(var_28)
int32_t rsi_1 = *(var_28 + 0xc)
*(var_28 + 0xc) -= 1

if (rsi_1 == 1)
    (*(*var_28 + 8))(var_28, zx.q(rsi_1))

// 函数: new_handler
// 地址: 0x140b718b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e18648 != 0)
    int64_t rax_1 = data_143e18548
    
    if (rax_1 == 0)
        return 
    
    return rax_1() __tailcall

bool cond:0 = data_143de542c == 0
data_143e18648 = 1
int64_t entry_r9

if (not(cond:0))
    void var_28
    entry_r9 = sub_140b21610(0, 
        _vfprintf_p_l(&var_28, 
            Pure virtual function being called while application was running (GIsRunning == 1).", 
        Core"), nullptr)
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            entry_r9 = (**var_20)(var_20)
            int32_t rdi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rdi_1 == 1)
                entry_r9 = (*(*var_20 + 8))(var_20, zx.q(rdi_1))

sub_140af98a0("Unknown", 0x1db, u"Pure virtual function being called", entry_r9)
return sub_140afbb40() __tailcall

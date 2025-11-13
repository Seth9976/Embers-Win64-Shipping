// 函数: sub_142801e10
// 地址: 0x142801e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t* rbx = arg3
int64_t* rsi = nullptr
(*(*arg4 + 0x18))(arg4, "Actors")
int32_t r12 = 0
int32_t rax_2 = (*(*arg2 + 0x48))(arg2)
int64_t* arg_28
int64_t* rdi = arg_28
int64_t r14 = -1
char var_b8[0x69]

if (rax_2 != 0)
    int32_t rax_15
    
    do
        int64_t* arg_10
        int32_t rax_4 = (*(*arg2 + 0x58))(arg2, &arg_10, 1, zx.q(r12))
        int64_t* rdx_1 = arg_10
        
        if (rax_4 != 0)
            rsi = nullptr
            
            if (rdx_1[1].w == 0x10)
                rsi = rdx_1
        
        if (rsi == 0)
            (*(*rbx + 0x68))(rbx, rdx_1)
            memset(&var_b8, 0, 0x80)
            physx::shdfnd::snprintf(&var_b8, 0x80, "%I64u")
            
            if (var_b8[0] != 0)
                int64_t r8 = -1
                
                do
                    r8 += 1
                while (var_b8[r8] != 0)
                
                (**rdi)(rdi, &var_b8, r8)
            
            arg_28.b = 0
            (**rdi)(rdi, &arg_28, 1)
            (*(*arg4 + 0x10))(arg4, "PxActorRef", rdi[4])
            rbx = arg_18
            rdi[3] = 0
        else if ((*(*rsi + 0x1b8))(rsi, rdx_1) == 0)
            sub_142806eb0(arg4, rbx, "PxArticulationRef", (*(*rsi + 0x1b0))(rsi))
        
        r12 += 1
        rax_15 = (*(*arg2 + 0x48))(arg2)
    while (r12 u< rax_15)

(*(*arg4 + 0x20))(arg4)
(*(*arg2 + 0x48))(arg2)
memset(&var_b8, 0, 0x80)
physx::shdfnd::snprintf(&var_b8, 0x80, "%u")

if (var_b8[0] != 0)
    int64_t r8_2 = -1
    
    do
        r8_2 += 1
    while (var_b8[r8_2] != 0)
    
    (**rdi)(rdi, &var_b8, r8_2)

arg_18.b = 0
(**rdi)(rdi, &arg_18, 1)
(*(*arg4 + 0x10))(arg4, "NumActors", rdi[4])
rdi[3] = 0
(*(*arg2 + 0x50))(arg2)
memset(&var_b8, 0, 0x80)
physx::shdfnd::snprintf(&var_b8, 0x80, "%u")

if (var_b8[0] != 0)
    int64_t r8_4 = -1
    
    do
        r8_4 += 1
    while (var_b8[r8_4] != 0)
    
    (**rdi)(rdi, &var_b8, r8_4)

arg_18.b = 0
(**rdi)(rdi, &arg_18, 1)
(*(*arg4 + 0x10))(arg4, "MaxNbActors", rdi[4])
rdi[3] = 0
char const* const rdx_9 = "false"

if ((*(*arg2 + 0x68))(arg2) != 0)
    rdx_9 = "true"

if (*rdx_9 != 0)
    do
        r14 += 1
    while (rdx_9[r14] != 0)
    
    (**rdi)(rdi, rdx_9, r14)

arg_18.b = 0
(**rdi)(rdi, &arg_18, 1)
(*(*arg4 + 0x10))(arg4, "SelfCollision", rdi[4])
rdi[2]
rdi[3] = 0
int64_t var_c8 = 0
physx::PxAggregateGeneratedInfo::PxAggregateGeneratedInfo(&var_b8)
return 0
